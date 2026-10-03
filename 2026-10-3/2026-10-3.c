#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*int main()
{
    int n = 0;
    scanf("%d", &n);
    char ch[100] = { 0 };
    int i = 0;
    scanf("%s", ch);
    for (i = 0; i < n; i++)
    {
        if (ch[i] == 'J')
        {
            ch[i] = 'O';
        }
        else if (ch[i] == 'I')
        {
            ch[i] = 'J';
        }
        else if (ch[i] == 'O')
        {
            ch[i] = 'I';
        }
    }
        printf("%s", ch);
    return 0;
}*//*
int main()
{
    int l, n, a, b;
    int z = 0;
    scanf("%d", &l);
    int r = l + 1;
    scanf("%d", &n);
    scanf("%d %d", &a, &b);
    printf("a=%d, b=%d\n", a, b);
    int left1 = a - z;//1
    int left2 = b - z;//3
    int right1 = r - a;//4
    int right2 = r - b;//2
    //求右边是士兵的最快速度
    int min1 = (left2 < right2 ? left2 : right2);
    //right2
    //求左边是士兵的最快速度
    int min2 = (left1 < right1 ? left1 : right1);
    //left1
    //总和最快速度
    int min3 = (min1 < min2 ? min2 : min1);
    //min2
    //求右边是士兵的最慢速度
    int max1 = (left2 < right2 ? right2 : left2);
    //left2
    //求左边是士兵的最慢速度
    int max2 = (left1 < right1 ? right1 : left1);
    //right1
    //总和最慢速度
    int max3 = (max1 < max2 ? max2 : max1);
    //max2
    printf("%d %d", min3, max3);
    return 0;
}*/
int main()
{
    int l, n;
    scanf("%d", &l);
    scanf("%d", &n);
    int i = 0;
    int z = 0;
    int r = l + 1;
    int arr[1000] = { 0 };
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int tomin = 0;
    int tomax = 0;
    for (i = 0; i < n; i++)
    {
        int min = 0;
        int max = 0;
        if (arr[i] - z > r - arr[i])
        {
            max = arr[i] - z;
            min = r - arr[i];
        }
        else
        {
            min = arr[i] - z;
            max = r - arr[i];
        }
        if (tomin < min)
        {
            tomin = min;
        }
        if (tomax < max)
        {
            tomax = max;
        }
    }
    printf("%d %d", tomin, tomax);
    return 0;
}
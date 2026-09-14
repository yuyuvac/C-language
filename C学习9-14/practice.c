#include<stdio.h>
#include<stdlib.h>
/*
void calculator()
{
    printf("--------calculator--------\n");
    printf("--------1.add  2.mins--------\n");
    printf("--------3.times  4.divided--------\n");
    printf("--------0.exit--------\n");
}
int add(int x,int y)
{
    return x+y;
}
int mins(int x,int y)
{
    return x-y;
}
int times(int x,int y)
{
    return x*y;
}
double divided(int x,int y)
{
    if(y==0)
    {
        printf("0是非除数\n");
        return 0;
    }
    return (double)x/y;
}
int main()
{
    int a=0;
    int b=0;
    int c=0;
    int flag=1;
    do
    {
        flag =1;
        calculator();
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                printf("你已经进入加法运算，请输入数字\n");
                scanf("%d %d",&a,&b);
                printf("结果：%d\n", add(a,b));
                break;
            case 2:
                printf("你已经进入减法运算，请输入数字\n");
                scanf("%d %d",&a,&b);
                printf("结果：%d\n", mins(a,b));
                break;
            case 3:
                printf("你已经进入乘法运算，请输入数字\n");
                scanf("%d %d",&a,&b);
                printf("结果：%d\n", times(a,b));
                break;
            case 4:
                printf("你已经进入除法运算，请输入数字\n");
                scanf("%d %d",&a,&b);
                printf("结果：%lf\n", divided(a,b));
                break;
            case 0:
                flag=0;
                printf("你已退出\n");
                break;
            default:
                printf("输入错误，请重新输入\n");
        }
    }while(flag);
    return 0;
}
*/
int example(int x)
{
    int j=0;
    int count=0;
    if(x<2)
    {
        return 0;
    }
    for(j=2;j<x;j++)
    {
        if(x%j==0)
        {
            return 0;
        }
        else if(count==x-j-1 && x%j!=0)
        {
            return 1;
        }
        count++;
    }
    return 1;
}
int main()
{
    system("chcp 65001");
    int b=0;
    int a=0;
    printf("请输入你想要知道的从0到最大数的素数个数\n");
    scanf("%d",&a);
    for(int i=0;i<=a;i++)
    {
        if(example(i)==1)
        {
            printf("%d ",i);
            b++;
        }
    }
    printf("\n");
    printf("一共有%d个素数\n",b);
    return 0;
}
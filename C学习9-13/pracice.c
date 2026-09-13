#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int e = 0;
	scanf("%d %d", &a, &b);
	int d = b;
	for (c = a; c <= d; c++)
	{
		for (e = 2; e <= d - 1; e++)
		{
			if (c%e==0)
			{
				break;                         
			}
			else if (c%e!=0)
			{
				printf("%d ", c);
				break;
			}
		}
	}
	return 0;
}
*/
/*
int main()
{
	int a = 0;
	int arr[15] = {12,45,7,89,23,56,33,78,9,67,41,29,74,51,81};
	int c = sizeof(arr) / sizeof(arr[0]);
	int b = 0;
	int count = 0;
	scanf("%d", &a);
	for ( b = 0; b <= c - 1; b++)
	{
		if (a == arr[b])
		{
			printf("找到了下标是:%d\n",b);
			break;
		}
		else
		{
			++count;
		}
	}
		if (count == sizeof(arr) / sizeof(arr[0]))
		{
			printf("没找到\n");
		}
	return 0;
}*/
/*
int main()
{
	int num[] = { 2,5,2,8,5,9,9,9,3,2 };
	int c = sizeof(num) / sizeof(num[0]);
	int a = 0;
	int v = 0;
	int arr[5] = { 0 };
	int count = 0;
	for (a = 0; a <= c-1; a++)
	{
		int flag = 0;
		for (v = 0; v < count; v++)
		{
			if (arr[v] == num[a])
			{
				flag = 1;
				break;
			}
		}
		if (flag==0)
		{
			arr[count] = num[a];
			count++;
		}
	}
	for (a = 0; a < sizeof(arr) / sizeof(arr[0]); a++)
	{
		printf("%d ", arr[a]);
		}

	return 0;
}*/
int main()
{
	int a = 0;
	int arr[8] = { 0 };
	int c = 0;
	for (a = 0; a < 8; a++)
	{
		scanf("%d", &c);
		arr[a] = c;
	}
	int l = 0;
	int r = l + 1;
	int v = 0;
	for (l = 0; l<sizeof(arr)/sizeof(arr[0])-1; l++)
	{
		for (r = l + 1; r< sizeof(arr) / sizeof(arr[0]); r++)
		{
			if (arr[l] > arr[r])
			{
				v = arr[l];
				arr[l] = arr[r];
				arr[r]=v;
			}
		}
	}
	for (a = 0; a < 8; ++a)
	{
		printf("%d ", arr[a]);
	}
	return 0;
}
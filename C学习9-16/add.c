#define _CRT_SECURE_NO_WARNINGS
#include "add.h"
//给棋盘赋值
void Given(char arr[rows][cols], int x, int y, char set)
{
	int i = 1;
	for (i = 1; i <= x; i++)
	{
		int j = 0;
			for (j = 1; j <= y; j++)
			{
				arr[i][j] = set;
			}
	}
}
//打印棋盘
void print(char arr[rows][cols], int x, int y)
{
	int c = 0;
	int i = 1;
	for (c = 0; c <= x; c++)
	{
		printf("%d ", c);
	}
	printf("\n");
	for (i = 1; i <= x; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= y; j++)
		{
			printf("%c ",arr[i][j]);
		}
		printf("\n");
	}
}
//布置雷区
void put(char arr[rows][cols], int x, int y)
{
	int count = 10;
	
	while (count) 
	{
		int ooo = rand() % 9 + 1;
		int ooc = rand() % 9 + 1;
		if (arr[ooo][ooc] == '0')
		{
			arr[ooo][ooc] = '1';
			count=count-1;
		}
	}
 }
//排雷
int find(char arr[rows][cols], char brr[rows][cols], int x, int y)
{
	int flag = 0;
	int p = 0;
	int l = 0;
	int sz = x * y - 10;
	while (sz)
	{
		printf("输入你想排除的坐标(x,y)\n");
		scanf("%d %d", &p, &l);
		print(arr, row, col);
		print(brr, row, col);
		if (arr[p][y] == '1')
		{
			printf("你被炸死了\n");
			break;
		}
		else
		{
			sz--;
		}
	}
	if (sz == 0)
	{
		printf("恭喜你赢了\n");
		return 0;
	}
	else
	{
		flag = 1;
		return flag;
	}
	
}
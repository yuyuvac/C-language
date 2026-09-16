#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "add.h"
#include <time.h>
void saolei()
{
	printf("------扫雷------\n");
	printf("1,进行游玩\n");
	printf("0,退出游戏\n");
}
int main()
{
	int ko = 0;
	int a = 0;
	saolei();
	char mine[rows][cols];
	char show[rows][cols];
	srand((unsigned int)time(NULL));
	do
	{
	
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			Given(mine, row, col,'0');//给棋盘赋值
			Given(show, row, col, '*');//给棋盘赋值
			print(mine, row, col);//打印棋盘
			printf("\n");
			print(show, row, col);//打印棋盘
			printf("\n");
			put(mine, row, col);//布置雷区
			printf("\n");
			print(mine, row, col);//查看雷区
			ko = find(mine, show, row, col);
			if (ko == 1)
			{
				break;
			}
		case 0:
			break;
		default:
			printf("输入错误请重新输入\n");
		}
	} while (a);
	if (a == 0)
	{
		printf("你已经退出\n");
	}
	return 0;
}
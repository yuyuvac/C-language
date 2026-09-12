#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned int)time(NULL));
	int a = 0;
	int b = 0;
	int c = 0;
	int count = 10;
	do {
		printf("******猜数字游戏******\n");
		printf("******1.直接耍起******\n");
		printf("******0.不耍了不耍了******\n");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			b = rand()%100+1;
			printf("请开始猜数字\n");
			while (count)
			{
				printf("你现在有%d次机会\n", count);
				scanf("%d", &c);
				if (b == c)
				{
					printf("恭喜你猜对了\n");
					break;
				}
				else if (b < c)
				{
					printf("猜大了\n");
				}
				else if (b > c)
				{
					printf("猜小了\n");
				}
				count = count - 1;
			}
			printf("你的机会次数已耗尽，失败\n");
			printf("真实数字是%d\n",b);
			break;
		case 0:
			printf("已经退出游戏，下次来耍\n");
			break;
		default:
			printf("输入错误请重新输入\n");
		}
	} while (a);
	return 0;
}
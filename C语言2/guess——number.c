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
		printf("******��������Ϸ******\n");
		printf("******1.ֱ��ˣ��******\n");
		printf("******0.��ˣ�˲�ˣ��******\n");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			b = rand()%100+1;
			printf("�뿪ʼ������\n");
			while (count)
			{
				printf("��������%d�λ���\n", count);
				scanf("%d", &c);
				if (b == c)
				{
					printf("��ϲ��¶���\n");
					break;
				}
				else if (b < c)
				{
					printf("�´���\n");
				}
				else if (b > c)
				{
					printf("��С��\n");
				}
				count = count - 1;
			}
			printf("��Ļ�������Ѻľ���ʧ��\n");
			printf("��ʵ������%d\n",b);
			break;
		case 0:
			printf("�Ѿ��˳���Ϸ���´���ˣ\n");
			break;
		default:
			printf("�����������������\n");
		}
	} while (a);
	return 0;
}
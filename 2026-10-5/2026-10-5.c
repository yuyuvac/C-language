#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
/*
int main()
{
	int n = 0;
	scanf("%d", &n);
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	int count = n / (a + b);
	printf("%d", count);
	return 0;
}
int main()
{
	int n = 0;
	char s[100] = { 0 };
	char t[100] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf(" %c", &s[i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf(" %c", &t[i]);
	}
	int kui = 0;
	int tai = 0;
	for (int i = 0; i < n; i++)
	{
		if ((s[i] == 'R' && t[i] == 'P') || (s[i] == 'S' && t[i] == 'R'))
		{
			tai++;
		}
		else if ((s[i] == 'S' && t[i] == 'P') || (s[i] == 'R' && t[i] == 'P'))
		{
			kui++;
		}
	}
	printf("%d %d", kui, tai);
	return 0;
}
int main()
{
	int n, x, y;
	scanf("%d %d %d", &n, &x, &y);
	int arr[1000] = {0};
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = 0;
	int count = 0;
	for (i = 0; i < n; i++)
	{
		if (x + y == arr[i] || x * y == arr[i])
		{
			count++;
			if (arr[i] > max)
			{
				max = arr[i];
			}
		}
		else if (x + arr[i] == y || x * arr[i] == y)
		{
			count++;
			if (arr[i] > max)
			{
				max = arr[i];
			}
		}
		else if (y + arr[i] == x || y * arr[i] == x)
		{
			count++;
			if (arr[i] > max)
			{
				max = arr[i];
			}
		}
	}
	printf("%d %d", count, max);
	return 0;
}*/
int main()
{
	size_t n = 0;
	size_t k = 0;
	size_t arr[100] = { 0 };
	scanf("%zu", &n);
	size_t i = 0;
	for (i = 1; i <= n; i++)
	{
		scanf("%zu", &arr[i]);
	}
	scanf("%zu", &k);
	if (arr[k] == 1)
	{
		for (i = 1; i <= n; i++)
		{
			if (arr[i] == 0)
			{
				printf("%zu", i);
				break;
			}
		}
	}
	else if (arr[k] == 0)
	{
		printf("%zu", k);
	}
	return 0;
}
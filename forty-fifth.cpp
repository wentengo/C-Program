#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int DG(int x)
{
	if (x <= 2)
		return 1;
	else
		return DG(x - 1) + DG(x - 2);
}

int FDG(int x)
{
	int a = 1, b = 1, c = 0;
	if (x <= 2)
		return 1;
	for (; x > 2; x--)
	{
		c = b + a;
		a = b;
		b = c;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("递归结果=>%d\n", DG(n));
	printf("非递归结果=>%d\n", FDG(n));
	return 0;
}
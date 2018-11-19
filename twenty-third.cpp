#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
int main()
{
	int i, x, y, count = 0;
	int a[32] = { 0 };
	int b[32] = { 0 };
	scanf("%d.%d", &x, &y);
	for (i = 31; i >= 0; i--)
	{
		a[i] = x % 2;
		x /= 2;
	}
	for (i = 31; i >= 0; i--)
	{
		b[i] = y % 2;
		y /= 2;
	}
	for (i = 0; i < 32; i++)
	{
		if (a[i] != b[i])
			count++;
	}
	printf("%d\n", count);
	return 0;
}
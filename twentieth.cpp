#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
int main()
{
	int i, x, count=0;
	int a[8] = {0};
	scanf("%d", &x);
	for (i = 7; i >= 0; i--)
	{
		a[i] = x % 2;
		if (a[i] == 1)
			count++;
		x /= 2;
	}
	for (i = 0; i < 8; i++)
		printf("%d", a[i]);
	printf(" %d¸ö1\n", count);
	return 0;
}
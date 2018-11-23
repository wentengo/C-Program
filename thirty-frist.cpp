#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main()
{
	int i, j;
	int a[11][11] = { { 1 } };
	printf("%4d\n", a[0][0]);
	for (i = 1; i <= 10; i++)
	{
		a[i][0] = 1;
		printf("%4d", a[i][0]);
		for (j = 1; j <= i; j++)
		{
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	getchar();
	return 0;
}
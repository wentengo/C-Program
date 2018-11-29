#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main()
{
	int a[11] = { 0, 0, 1, 1, 2, 2, 3, 5, 5, 4, 4 };
	int i;
	for (i = 1; i <= 10; i++)
	{
		a[0] ^= a[i];
	}
	printf("%d\n", a[0]);
	getchar();
	return 0;
}
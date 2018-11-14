#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
int main()
{
	int i, j, x, y, z;
	for (i = 100; i < 1000; i++)
	{
		x = i % 10;
		y = i / 10 % 10;
		z = i / 100;
		x = x*x*x;
		y = y*y*y;
		z = z*z*z;
		j = x + y + z;
		if (i == j)
			printf("%4d", i);
	}
	getchar();
	return 0;
}
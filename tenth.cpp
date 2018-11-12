#include "stdio.h"
int main()
{
	double i, j, x, y;
	x = 0;
	y = 0;
	for (i = 1; i < 100; i += 2)
	{
		x += 1 / i;
	}
	for (j = 2; j <= 100; j += 2)
	{
		y += 1 / j;
	}
	x = x - y;
	printf("输出的值为%lf", x);
	return 0;
}
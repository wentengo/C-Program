#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdarg.h"

int average(int n, ...)
{
	va_list arg;
	int i = 0;
	int max = 0;
	va_start(arg, n);
	max = va_arg(arg, int);
	for (i = 1; i < n; i++)
	{
		int tmp = va_arg(arg, int);
		if (max<tmp)
			max = tmp;
	}
	return max;
	va_end(arg);
}

int main()
{
	int a = average(3, -1, -5, -9);
	printf("最大值为:>%d\n", a);
	return 0;
}
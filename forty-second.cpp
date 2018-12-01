#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdarg.h"

int average(int n, ...)
{
	va_list arg;
	int i = 0;
	int sum = 0;
	va_start(arg, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);
	return sum / n;
	va_end(arg);
}

int main()
{
	int a = average(3, 1, 5, 9);
	printf("平均值为:>%d\n", a);
	return 0;
}
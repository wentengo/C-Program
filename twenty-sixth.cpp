#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int function(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 0;
	return 1;
}

int main()
{
	int year;
	scanf("%d", &year);
	if (function(year))
		printf("²»ÊÇ");
	else
		printf("ÊÇ");
	return 0;
}
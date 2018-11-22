#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int function(int num)
{
	int i;
	for (i = 2; i < num; i++)
	{
		if (num % 2 == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int n;
	scanf("%d", &n);
	if (function(n))
		printf("²»ÊÇ");
	else
		printf("ÊÇ");
	return 0;
}
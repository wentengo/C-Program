#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
int main()
{
	int x, y;
	scanf("%d", &x);
	printf("个位数是:>");
	while (x!=0)
	{
		y = x % 10;
		x /= 10;
		printf("%d\n", y);
		if (x != 0)
			printf("上一位数是:>");
	}
	return 0;
}
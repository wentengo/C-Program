#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	printf("%d", ((x + y) >> 1));
	getchar();
	return 0;
}
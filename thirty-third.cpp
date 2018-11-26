#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#define MAX(x,y) x>y?x:y

int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	int max = MAX(x, y);
	printf("%d\n", max);
	getchar();
	return 0;
}
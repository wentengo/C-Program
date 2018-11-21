#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

void function(int *n, int *m)
{
	*n = (*m) + (*n);
	*m = (*n) - (*m);
	*n = (*n) - (*m);
}

int main()
{
	int x, y;
	printf("交换前x,y的值分别为:>");
	scanf("%d %d",&x,&y);
	function(&x, &y);
	printf("交换后x,y的值分别为:>%d %d",x,y);
	return 0;
}
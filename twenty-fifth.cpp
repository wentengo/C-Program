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
	printf("����ǰx,y��ֵ�ֱ�Ϊ:>");
	scanf("%d %d",&x,&y);
	function(&x, &y);
	printf("������x,y��ֵ�ֱ�Ϊ:>%d %d",x,y);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

void DG(int x)
{
	if (x > 0)
	{
		DG(x / 10);
		printf("%d ", x % 10);
	}
}


int main()
{
	int n = 0;
	scanf("%d", &n);
	DG(n);
	printf("\n");
	return 0;
}
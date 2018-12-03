#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int DG(int n, int k)
{
	if (k == 0)
		return 1;
	else
		return n*DG(n, k - 1);
}

int main()
{
	int n = 0, k = 0;
	scanf("%d %d", &n, &k);
	printf("%d\n", DG(n, k));
	return 0;
}
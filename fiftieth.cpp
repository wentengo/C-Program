#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int DG(int n)
{
	if (n == 1)
		return 1;
	else
		return n*DG(n - 1);
}

int FDG(int n)
{
	int sum = 1;
	while (n > 0)
	{
		sum *= n;
		n--;
	}
	return sum;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("�ݹ���=>%d\n", DG(n));
	printf("�ǵݹ���=>%d\n", FDG(n));
	getchar();
	return 0;
}
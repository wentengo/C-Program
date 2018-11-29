#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int CZ(int a[3][3], int x)
{
	int i = 0, j = 2;
	while ((i < 3) && (j >= 0))
	{
		if (x < a[i][j])
			j--;
		else if (x>a[i][j])
			i++;
		else if (x == a[i][j])
			return 1;
	}
	return 0;
}

int main()
{
	int x, ret;
	int a[3][3] = { 1, 3, 5, 2, 4, 6, 5, 6, 7 };
	scanf("%d", &x);
	ret=CZ(a,x);
	if (ret)
		printf("´æÔÚ\n");
	else
		printf("²»´æÔÚ\n");
	getchar();
	return 0;
}
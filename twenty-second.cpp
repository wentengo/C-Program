#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
int main()
{
	int x, y;
	scanf("%d", &x);
	printf("��λ����:>");
	while (x!=0)
	{
		y = x % 10;
		x /= 10;
		printf("%d\n", y);
		if (x != 0)
			printf("��һλ����:>");
	}
	return 0;
}
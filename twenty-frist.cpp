#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
int main()
{
	int i, x;
	int a[16] = { 0 };
	scanf("%d", &x);
	for (i = 15; i >= 0; i--)
	{
		a[i] = x % 2;
		x /= 2;
	}
	for (i = 0; i <= 15; i++)
		printf("%d", a[i]);
	printf("\n��������Ϊ:>");
	for (i = 0; i <= 15;i+=2)
		printf("%d", a[i]);
	printf("\nż������Ϊ:>");
	for (i = 1; i <= 15; i += 2)
		printf("%d", a[i]);
	return 0;
}
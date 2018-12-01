#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int PD(char *a, char *b, int sz)
{
	int i;
	int tmp[] = { 0 };
	for (i = 0; i < sz - 1; i++)
		a[i] ^= b[i];
	for (i = 1; i < sz - 1; i++)
		a[0] ^= a[i];
	if (a[0] == 0)
		return 1;
	return 0;
}

int main()
{
	char a[] = "AABCD";
	char b[] = "BCDAA";
	int sza = sizeof(a) / sizeof(a[0]);
	int szb = sizeof(b) / sizeof(b[0]);
	if (sza == szb)
	{
		if (PD(a, b, sza))
			printf("ÊÇ\n");
		else
			printf("²»ÊÇ\n");
	}
	else
		printf("0\n");
	getchar();
	return 0;
}
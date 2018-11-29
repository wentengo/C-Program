#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main()
{
	int i = 0;
	int a[] = { 1, 3, 6, 8, 9, 4, 4, 6, 7 };
	int sz = sizeof(a) / sizeof(a[0]) - 1;
	int j = sz;
	while (i < j)
	{
		if ((a[i] & 1) != 1)
		{
			int tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			j--;
		}
		else
			i++;
	}
	for (i = 0; i <= sz; i++)
		printf("%2d", a[i]);
	getchar();
	return 0;
}
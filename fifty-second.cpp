#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main()
{
	int a[] = { 1, 1, 2, 2, 6, 5, 7, 8, 7, 8, 9, 9 };
	int sz = sizeof(a) / sizeof(a[0]);
	int i = 0, ret = 0, pos = 0;
	int x = 0, y = 0;
	for (i = 0; i < sz; i++)
		ret ^= a[i];
	for (i = 0; i < 32; i++)
	if ((ret >> i) & 1)
		pos = i;
	for (i = 0; i < sz; i++)
	{
		if ((a[i] >> pos) & 1)
			x ^= a[i];
		else
			y ^= a[i];
	}
	printf("%d %d\n", x, y);
	return 0;
}
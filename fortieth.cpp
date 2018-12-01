#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

void NZ(char *a, int s, int w)
{
	int left = s;
	int right = w - 2;
	while (left < right)
	{
		char tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		left++;
		right--;
	}
}

void ZX(char *a, int x, int sz)
{
	NZ(a, 0, sz);
	NZ(a, 0, sz - x);
	NZ(a, sz - x - 1, sz);
}

int main()
{
	char a[] = "ABCD";
	int sz = sizeof(a) / sizeof(a[0]);
	int x = 0;
	scanf("%d", &x);
	ZX(a, x, sz);
	printf("%s\n", a);
	getchar();
	return 0;
}
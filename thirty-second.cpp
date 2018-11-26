#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#define NNN(x) ((((x) & (0x55555555)) << 1) | (((x) & (0xAAAAAAAA)) >> 1))

int main()
{
	int x;
	scanf("%d", &x);
	printf("%d\n", NNN(x));
	getchar();
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned int reverse_bit(unsigned int value)
{
	int i = 0, ret = 0;
	for (i = 0; i < 32; i++)
	{
		ret <<= 1;
		ret |= ((value >> i) & 1);
	}
	return ret;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%u\n", reverse_bit(n));
	getchar();
	return 0;
}
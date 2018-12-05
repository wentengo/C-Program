#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "assert.h"

int DG(char *n)
{
	assert(n != NULL);
	if (*n)
		return DG(n + 1) + 1;
	else
		return 0;
}

char FDG(char *n)
{
	assert(n != NULL);
	int sum = 0;
	while (*n)
	{
		sum++;
		n++;
	}
	return sum;
}

int main()
{
	char n[] = "abcdefg";
	printf("递归结果=>%d\n", DG(n));
	printf("非递归结果=>%d\n", FDG(n));
	return 0;
}
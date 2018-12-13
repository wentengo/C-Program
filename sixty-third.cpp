#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "assert.h"

void *my_memcpy(void *a, void *b, size_t n)
{
	assert(a != NULL);
	assert(b != NULL);
	void *ret = a;
	while (n--)
	{
		*(char*)a = *(char*)b;
		a = (char*)a + 1;
		b = (char*)b + 1;
	}
	return ret;
}

int main()
{
	char a[20] = "0";
	char b[] = "abcdefgh";
	int n = 0;
	scanf("%d", &n);
	printf("%s\n", my_memcpy(a, b, n));
	return 0;
}
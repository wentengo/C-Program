#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "assert.h"

void *my_memmove(void *a, void *b, size_t n)
{
	assert(a != NULL);
	assert(b != NULL);
	void *ret = a;
	if (a <= b || (char*)a >= (char*)b + n)
	{
		while (n--)
		{
			*(char*)a = *(char*)b;
			a = (char*)a + 1;
			b = (char*)b + 1;
		}
	}
	else
	{
		a = (char*)a + n - 1;
		b = (char*)b + n - 1;
		while (n--)
		{
			*(char*)a = *(char*)b;
			a = (char*)a + 1;
			b = (char*)b + 1;
		}
	}
	return ret;
}

int main()
{
	char a[20] = "abcdef";
	char b[20] = "abcdg";
	int n = 0;
	scanf("%d", &n);
	printf("%s\n", my_memmove(a, b, n));
	return 0;
}
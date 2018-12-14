#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "assert.h"

char *my_strncpy(char *a,char *b,size_t n)
{
	assert(a != NULL);
	assert(b != NULL);
	char *ret = a;
	while (n--)
	{
		*a++ = *b++;
	}
	return ret;
}

int main()
{
	char a[20] = "0";
	char b[] = "abcdef";
	int n = 0;
	scanf("%d", &n);
	printf("%s\n", my_strncpy(a, b, n));
	return 0;
}
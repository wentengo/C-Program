#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "assert.h"

char *my_strncat(char *a, char *b, size_t n)
{
	assert(a != NULL);
	assert(b != NULL);
	char *ret = a;
	while (*a)
	{
		a++;
	}
	while (n--)
	{
		*a++ = *b++;
	}
	return ret;
}

int main()
{
	char a[20] = "abcd";
	char b[] = "efghijk";
	int n = 0;
	scanf("%d", &n);
	printf("%s\n", my_strncat(a, b, n));
	return 0;
}
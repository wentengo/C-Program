#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "assert.h"

char *my_strcpy(char *a, char *b)
{
	char *ret = a;
	assert(a != NULL);
	assert(b != NULL);
	while (*a++ = *b++)
	{
		;
	}
	return ret;
}

int main()
{
	char a[20] = "0";
	char b[] = "abcdef";
	printf("%s\n", my_strcpy(a, b));
	return 0;
}
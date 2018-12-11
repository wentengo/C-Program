#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "assert.h"

char *my_strcat(char *a, char *b)
{
	char *ret = a;
	assert(a != NULL);
	assert(b != NULL);
	while (*a)
	{
		a++;
	}
	while (*a++ = *b++)
	{
		;
	}
	return ret;
}

int main()
{
	char a[] = "abc";
	char b[] = "def";
	printf("%s\n", my_strcat(a, b));
	return 0;
}
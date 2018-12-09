#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "assert.h"

char *my_strcat(char *a, char *b)
{
	assert(a != NULL);
	assert(b != NULL);
	char *ret = a;
	while (*a)
		a++;
	while (*a++ = *b++)
	{
		;
	}
	return ret;
}

int main()
{
	char a[20] = "abcd";
	char b[] = "efgh";
	printf("%s\n", my_strcat(a, b));
	return 0;
}
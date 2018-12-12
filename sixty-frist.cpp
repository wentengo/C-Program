#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "assert.h"

char *my_strchr(char *a, char b)
{
	assert(a);
	int i = 0;
	if (b == '\0')
		return NULL;
	while (*a != '\0')
	{
		if (*a == b)
			return a;
		a++;
	}
	return NULL;
}

int main()
{
	char a[20] = "abcdef";
	printf("%s\n", my_strchr(a, 'c'));
	return 0;
}
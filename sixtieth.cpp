#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "assert.h"

char *my_strstr(char *a, char *b)
{
	assert(a);
	assert(b);
	char *str1 = a;
	char *str2 = NULL;
	char *str3 = NULL;
	if (*b == '\0')
		return NULL;
	while (*str1)
	{
		str2 = str1;
		str3 = b;
		while (*str2 && *str3 && (*str2 == *str3))
		{
			str2++;
			str3++;
		}
		if (*str3 == '\0')
			return str1;
		str1++;
	}
	return NULL;
}

int main()
{
	char a[] = "abcdef";
	char *b = "cd";
	printf("%s\n", my_strstr(a, b));
	return 0;
}
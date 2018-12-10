#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"

void mppx(char *str[], int sz)
{
	int i = 0, j = 0;
	for (i = 0; i < sz - 1; i++)
	for (j = 0; j < sz - 1; j++)
	{
		if (strcmp(*(str + j), *(str + j + 1))>0)
		{
			char *tmp = *(str + j);
			*(str + j) = *(str + j + 1);
			*(str + j + 1) = tmp;
		}
	}
}

int main()
{
	char *str[] = { "abcd", "bcde", "cdef" };
	int sz = sizeof(str) / sizeof(*str);
	int i = 0;
	mppx(str, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%s ", *(str + i));
	}
	printf("\n");
	return 0;
}
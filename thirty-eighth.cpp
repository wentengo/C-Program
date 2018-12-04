#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"

void reverse_string(char * string)
{
	int len = strlen(string);
	char tmp = *string;
	*string = *(string + len - 1);
	*(string + len - 1) = '\0';
	if (strlen(string + 1) > 1)
		reverse_string(string + 1);
	*(string + len - 1) = tmp;
}

int main()
{
	char string[] = "abcdef";
	reverse_string(string);
	printf("%s\n", string);
	return 0;
}
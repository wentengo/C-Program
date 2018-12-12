#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "assert.h"

int my_strcmp(char *a, char *b)
{
	assert(a != NULL);
	assert(b != NULL);
	int ret = 0;
	while (!(ret = *a - *b) && *b)
	{
		a++;
		b++;
	}
	if (ret > 0)
		ret = 1;
	else if (ret < 0)
		ret = -1;
	return ret;
}

int main()
{
	char a[20] = "abcdef";
	char b[20] = "g";
	printf("%d\n", my_strcmp(a, b));
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "assert.h"

int my_strncmp(char *a, char *b, size_t n)
{
	assert(a != NULL);
	assert(b != NULL);
	int ret = 0;
	while (n-- && !(ret = *a - *b) && *b)
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
	char b[20] = "ac";
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", my_strncmp(a, b, n));
	return 0;
}
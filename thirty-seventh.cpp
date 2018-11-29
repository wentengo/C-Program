#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "assert.h"

int JS(const char *a)
{
	int count = 0;
	assert(a != NULL);
	while (*a)
	{
		count++;
		a++;
	}
	return count;
}

void NZ(char *left,char *right)
{
	assert(left != NULL);
	assert(right!= NULL);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void WC(char *a)
{
	char *b = a;
	char *left = a;
	char *right = a + JS(a) - 1;
	assert(a != NULL);
	NZ(left,right);
	while (*b)
	{
		char *str = b;
		while ((*b != ' ') && (*b != '\0'))
			b++;
		NZ(str, b-1);
		if (*b == ' ')
			b++;
	}
}

int main()
{
	char a[] = "student a am i";
	WC(a);
	printf("%s\n", a);
	getchar();
	return 0;
}
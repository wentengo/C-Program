#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
int main()
{
	int a, i, j, s;
	s = 0;
	j = 10000;
	scanf("%d", &a);
	for (i = 1; i <= 5; i++)
	{
		s = a*i*j + s;
	    j /= 10;
	}
	printf("%d", s);
	return 0;
}
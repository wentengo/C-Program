#include "stdio.h"
int main()
{
	int i,j, k,l;
	for (i = 1; i <= 100; i++)
	{
		l = 0;
		for (j = 2; j < i; j++)
		{
			k = i%j;
			if (k == 0)
				l++;
		}
		if (l == 0)
			printf("%4d", i);
	}
	return 0;
}

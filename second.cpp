#include "stdio.h"

int main()
{
	int i, j, k;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			k = i*j;
			printf("%2d*%d=%d", j, i, k);
		}
		printf("\n");
	}
	getchar();
	return 0;
}

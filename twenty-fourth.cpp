#include "stdio.h"

void function(int *num)
{
	int i, j;
	for (i = 1; i <= *num;i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d  ", j, i, i*j);
		}
		printf("\n");
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	function(&n);
	return 0;
}
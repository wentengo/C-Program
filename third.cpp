#include "stdio.h"
int main()
{
	int i, j;
	for (i = 1000; i <= 2000; i++)
	{
		j = i % 4;
		if (j == 0)
			printf("%5d", i);
	}
	getchar();
		return 0;
}
#include "stdio.h"
int main()
{
	int i, j,k;
	j = 0;
	for (i = 9; i <=100; i += 10)
		j++;
	for (k = 90; k <100; k++)
		j++;
	printf("1到100出现%d次9", j);
	return 0;
}
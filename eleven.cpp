#include "stdio.h"
int main()
{
	int i, j,k;
	j = 0;
	for (i = 9; i <=100; i += 10)
		j++;
	for (k = 90; k <100; k++)
		j++;
	printf("1��100����%d��9", j);
	return 0;
}
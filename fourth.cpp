#include "stdio.h"
int main()
{
	int i, j, k;
	scanf("%d %d", &i, &j);
	k = i;
	i = j;
	j = k;
	printf("i=%d,j=%d\n", i, j);
	getchar();
	return 0;
}
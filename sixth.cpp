#include "stdio.h"
#define N 10
int main()
{
	int i, j, a[N];
	j = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		if (a[i]>j)
			j = a[i];
	}
	printf("最大值为：%d", j);
	return 0;
}
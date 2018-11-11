#include "stdio.h"
#define N 10
int main()
{
	int i, j, k, x, y, z;
	int a[N], b[N];
	scanf("%d %d", &k, &z);
	y = 0;
	j = 0;
	for (i = 1; i <= k; i++)
	{
		if (k%i == 0)
		{
			a[j] = i;
			j++;
		}
	}
	for (x = 1; x <= z; x++)
	{
		if (z%x == 0)
		{
			b[y] = x;
			y++;
		}
	}
	int q, w, e;
	for (q = 0; q <= j; q++)
	{
		for (w = 0; w <= y; w++)
		{
			if (a[q] == b[w])
				e = a[q];
		}
	}
	printf("最大公约数为:%d\n",e );
	return 0;
}
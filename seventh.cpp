#include "stdio.h"
int main()
{
	int i, j, k, x, y, z;
	scanf("%d %d %d", &i, &j, &k);
	if (i < j)
	{
		if (j < k)
		{
			x = k;
			y = j;
			z = i;
		}
		else
		{
			x = j;
			if (i < k)
			{
				y = k;
				z = i;
			}
			else
			{
				y = i;
				z = k;
			}
		}
	}
	else
	{
		if (i < k)
		{
			x = k;
			y = i;
			z = j;
		}
		else
		{
			x = i;
			if (j < k)
			{
				y = k;
				z = j;
			}
			else
			{
				y = j;
				z = k;
			}
		}
	}
	printf("%d %d %d", x, y, z);
	return 0;
}
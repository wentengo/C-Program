#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main()
{
	int a[4] = { 1, 1, 1, 1 };
	int i;
	for (i = 0; i < 4; i++)
	{
		a[i] = 0;
		if ((a[0] == 1) + (a[2] == 0) + (a[3] == 0) + (a[3] == 1) == 3)
		{
			if (i == 0)
				printf("������A\n");
			if (i == 1)
				printf("������B\n");
			if (i == 2)
				printf("������C\n");
			if (i == 3)
				printf("������D\n");
		}
		a[i] = 1;
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main()
{
	int money = 0;
	int pos = 0;
	int huan = 0;
	scanf("%d",&money);
	pos = money;
	huan = money;
	while (huan>1)
	{
		pos += huan / 2;
		huan = huan / 2 + huan % 2;
	}
	printf("%d\n", pos);
	return 0;
}
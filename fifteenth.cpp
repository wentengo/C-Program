#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>  
int main()
{
	char c;
	int i = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == '{')
		{
			i++;
		}
		else if (c == '}'&& i == 0)
		{
			printf("不匹配");
			return 0;
		}
		else if (c == '}'&& i != 0)
		{
			i--;
		}
	}
	if (i == 0)
	{
		printf("匹配成功");
	}
	else
	{
		printf("匹配不成功");
	}
	return 0;
}
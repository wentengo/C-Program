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
			printf("��ƥ��");
			return 0;
		}
		else if (c == '}'&& i != 0)
		{
			i--;
		}
	}
	if (i == 0)
	{
		printf("ƥ��ɹ�");
	}
	else
	{
		printf("ƥ�䲻�ɹ�");
	}
	return 0;
}
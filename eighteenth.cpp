#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"

int main()
{
	char str1[] = "0123456789";
	char str2[10];
	int i, j = 0;
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", str2);
		if (strcmp(str1, str2) == 0)
		{
			printf("������ȷ\n");
			break;
		}
		else
			printf("�����������������\n");
	}
	if (i >= 3)
		printf("�������Σ������˳�����\n");
	return 0;
}
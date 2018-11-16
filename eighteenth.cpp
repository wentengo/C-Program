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
		printf("请输入密码：");
		scanf("%s", str2);
		if (strcmp(str1, str2) == 0)
		{
			printf("输入正确\n");
			break;
		}
		else
			printf("输入错误，请重新输入\n");
	}
	if (i >= 3)
		printf("错误三次，即将退出程序\n");
	return 0;
}
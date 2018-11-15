#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void game()
{
	int randnum = rand() % 100 + 1;
	int input = 0;
	while (1)
	{
		printf("请输入猜的数字>:");
		scanf("%d", &input);
		if (input > randnum)
			printf("猜大了\n");
		if (input < randnum)
			printf("猜小了\n");
		else
		{
			printf("猜对了\n");
			break;
		}
	} 
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
		    printf("选择错误，重新输入\n");
			break;
		}
	} while (input);
		return 0;
}
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
		printf("������µ�����>:");
		scanf("%d", &input);
		if (input > randnum)
			printf("�´���\n");
		if (input < randnum)
			printf("��С��\n");
		else
		{
			printf("�¶���\n");
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
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
		    printf("ѡ�������������\n");
			break;
		}
	} while (input);
		return 0;
}
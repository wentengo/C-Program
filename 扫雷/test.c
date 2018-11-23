#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void game()
{
	char show[ROWS][COLS];
	char mine[ROWS][COLS];
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	PrintBoard(show, ROW, COL);
	FindMine(mine, show, ROW, COL);
}

void ks()
{
	printf("*************************\n");
	printf("***  1.play   0.exit  ***\n");
	printf("*************************\n");
}

void xz()
{
	int input = 0;
	srand((uint)time(NULL));
	do
	{
		ks();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case START: game();
			break;
		case EXIT: printf("�˳���Ϸ\n");
			break;
		default: printf("ѡ�����\n");
			break;
		}
	} while (input);
}

int main()
{
	xz();
	return 0;
}
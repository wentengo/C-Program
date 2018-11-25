#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void game()
{
	char board[ROW][COL];
	char ret = 0;
	init_board(board, ROW, COL);
	print_board(board, ROW, COL);
	while (1)
	{
		player_move(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != ' ')
			break;
		print_board(board, ROW, COL);
		computer_move(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != ' ')
			break;
		print_board(board, ROW, COL);
	}
	if (ret == 'X')
		printf("���Ӯ\n");
	else if (ret == 'O')
		printf("����Ӯ\n");
	else if (ret == 'P')
		printf("ƽ��\n");
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
	srand((unsigned int)time(NULL));
	do
	{
		ks();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1: game();
			break;
		case 0: printf("�˳���Ϸ\n");
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
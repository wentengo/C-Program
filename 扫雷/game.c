#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0, j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void PrintBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS],int x,int y)
{
	int count = Easy_Count;
	while (count)
	{
		int i = rand() % (Easy_Count - 1) + 1;
		int j = rand() % (Easy_Count - 1) + 1;
		if (board[i][j] == '0' && i != x && j != y)
		{
			board[i][j] = '1';
			count--;
		}
	}
}

int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0');
}

void ZK(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if ((x >= 1) && (y >= 1) && (x <= ROW) && (y <= COL))
	{
		if (GetMineCount(mine, x, y) == 0)
		{
			show[x][y] = ' ';
			if (show[x - 1][y - 1] == '*')
				ZK(mine, show, x - 1, y - 1);
			if (show[x - 1][y] == '*')
				ZK(mine, show, x - 1, y);
			if (show[x - 1][y + 1] == '*')
				ZK(mine, show, x - 1, y + 1);
			if (show[x][y + 1] == '*')
				ZK(mine, show, x, y + 1);
			if (show[x + 1][y + 1] == '*')
				ZK(mine, show, x + 1, y + 1);
			if (show[x + 1][y] == '*')
				ZK(mine, show, x + 1, y);
			if (show[x + 1][y - 1] == '*')
				ZK(mine, show, x + 1, y - 1);
			if (show[x][y - 1] == '*')
				ZK(mine, show, x, y - 1);
		}
		else
		{
			show[x][y] = GetMineCount(mine, x, y) + '0';
		}
	}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0, y = 0, win = 0, set = 0;
	printf("请输入坐标:>");
	scanf("%d %d", &x, &y);
	SetMine(mine, x, y);
	while (1)
	{
		int i = 0, j = 0;
		for (i = 1; i <= ROW; i++)
		{
			for (j = 1; j <= COL; j++)
			{
				if (show[i][j] == '*')
					set++;
			}
		}
		if (set = Easy_Count)
			break;
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (mine[x][y] == '1')
			{
				printf("游戏失败\n");
				PrintBoard(mine, ROW, COL);
				break;
			}
			else
			{
				int count = GetMineCount(mine, x, y);
				if (count == 0)
				{
					ZK(mine, show, x, y);
					PrintBoard(show, ROW, COL);
				}
				else
				{
					show[x][y] = count + '0';
					PrintBoard(show, ROW, COL);
				}
			}
		}
		else
			printf("非法坐标\n");
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
	}
	if (set = Easy_Count)
		printf("扫雷成功\n");
}
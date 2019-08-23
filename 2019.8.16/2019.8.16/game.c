#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void InitBoard(char board[ROW][COL],int row,int col)
{
	memset(board,' ',row*col*sizeof(board[0][0]));
}
void DisplayBoard(char board[ROW][COL],int row,int col)
{
	int i = 0, j = 0;
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if(j < col-1)
			{
				printf("|");
			}
		}
		printf("\n");
		for(j = 0; j < col; j++)
		{
			if(i < row-1)
			{
				printf("---");
			}
			if(i < (row-1) && j < (col-1))
			{
				printf("|");
			}	
		}
		printf("\n");
	}
}
void PlayerMove(char board[ROW][COL],int row,int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>");
    
	while(1)
	{
        printf("请输入走的坐标:");
	    scanf("%d%d", &x,&y);
		if(x>=1 && x<=row && y>=1 && y<=col)
		{
			if(board[x-1][y-1] != ' ')
			{
				printf("该坐标被占用，请重新输入！\n");
			}
			else
			{
				board[x-1][y-1] = '*';
				break;
			}
		}
		else
		{
			printf("请重新输入:");
		}
	}
}
void ComputerMove(char board[ROW][COL],int row,int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	while(1)
	{
		x = rand() % row;
		y = rand() % col;
		if(x >= 0 && x < row && y >= 0 && y < col)
		{
			if(board[x][y] == ' ')
			{
				board[x][y] = '#';
				break;
			}
		}
	}
}
static int Is_Full(char board[ROW][COL],int row,int col)
{
	int i = 0, j = 0;
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			if(board[i][j] == ' ')
				return 0;
		}
	}
		return 1;
}
char Is_Win(char board[ROW][COL],int row,int col)
{
	int i = 0;
	//有人赢
	for(i = 0; i < row; i++)  
	{
		if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];//返回后就是'*'或者'#'
		}	
	}
	for(i = 0; i < col; i++)
	{
		if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ') 
		{
			return board[1][i];
		}
	}
	if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//平局---判断棋盘满不满，即数组有没有空格
	if(Is_Full(board,ROW,COL) == 1)
	{
		return 'P';
	}
	//游戏继续
	return 'C';
}

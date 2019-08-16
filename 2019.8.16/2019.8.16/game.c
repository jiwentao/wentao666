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
			printf("   ");
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
//void PlayerMove(char board[ROW][COL],int row,int col)
//{
//	int x = rand() % row;
//	int y = rand() % col;
//	printf("用户输入:");
//	scanf("%d%d", &x,&y);
//	while(1)
//	{
//		if(x>=1 && x<=row && y>=1 && y<=col)
//		{
//			board[x-1][y-1] = '*';
//		}
//		else
//		{
//			printf("请重新输入:");
//		}
//	}
//}
#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void game()
{
	char board[ROW][COL] = {0};
	InitBoard(board, ROW, COL);
	DisplayBoard(board,ROW,COL);
	PlayerMove(board,ROW,COL);
}
void menu()
{
	printf("**************************\n");
	printf("******   1.play     ******\n");
	printf("******   0.exit     ******\n");
	printf("**************************\n");
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;
		}
	}while(input);	
}
int main()
{
	srand((unsigned int)time(NULL));
	test();
	return 0;
}
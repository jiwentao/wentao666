#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
void menu()
{
	printf("*******************************\n");
	printf("****  1.ADD      2.DELETE  ****\n");
	printf("****  3.SEARCH   4.DISPLAY ****\n");
	printf("****  5.SORT     6.MODIFY  ****\n");
	printf("*********** 0.EXIT ************\n");
	printf("*******************************\n");
}
int main()
{
	int input = 0;
	Contact con;
	Init_con(&con);
	do
	{
		menu();
		printf("���������ѡ��:>");
		scanf("%d",&input);
		switch(input)
		{
		case EXIT:
			printf("�˳�ͨѶ¼��ллʹ��\n");
			break;
		case ADD:
			break;
		case DELETE:
			break;
		case SEARCH:
			break;
		case DISPLAY:
			break;
		case SORT:
			break;
		case MODIFY:
			break;
		default:
			printf("�����������������!\n");
			break;
		}
	}while(input);

	return 0;
}

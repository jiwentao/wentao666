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
			Destroy_con(&con);
			printf("�˳�ͨѶ¼��ллʹ��\n");
			break;
		case ADD:
			Add_con(&con);
			break;
		case DELETE:
			Delete_con(&con);
			break;
		case SEARCH:
			break;
		case DISPLAY:
			Display_con(&con);
			break;
		case SORT:
			SortByName_con(&con);
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

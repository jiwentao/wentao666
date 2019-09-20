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
		printf("请输入你的选择:>");
		scanf("%d",&input);
		switch(input)
		{
		case EXIT:
			printf("退出通讯录，谢谢使用\n");
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
			printf("输出错误，请重新输入!\n");
			break;
		}
	}while(input);

	return 0;
}

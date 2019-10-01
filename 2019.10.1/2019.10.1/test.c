#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"
void menu()
{
	printf("***********************************\n");
	printf("*****1.Add            2.Delete*****\n");
	printf("*****3.Modify         4.Display****\n");
	printf("*****5.Sort           6.Search*****\n");
	printf("**************0.Exit***************\n");
	printf("***********************************\n");
}
int main()
{
	int input = 0;
	Contact con;
	Init_Con(&con);
	do
	{
		menu();
		printf("请输入你的选择:>");
		scanf("%d",&input);
		switch(input)
		{
		case EXIT:
			SaveContact(&con);
			Destroy_Con(&con);
			printf("退出通讯录,谢谢使用!\n");
			break;
		case ADD:
			Add_Con(&con);
			break;
		case DELETE:
			break;
		case MODIFY:
			break;
		case DISPLAY:
			Display_Con(&con);
			break;
		case SORT:
			break;
		case SEARCH:
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	}while(input);
}
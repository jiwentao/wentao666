#define _CRT_SECURE_NO_WARNINGS
#include "Contact.h"
void menu()
{
	printf("****************************\n");
	printf("**** 1.ADD      2.DELET ****\n");
	printf("**** 3.MODIFY   4.SORT  ****\n");
	printf("**** 5.SEARCH   6.SHOW  ****\n");
	printf("*********  0.EXIT  *********\n");
	printf("****************************\n");
}
void test()
{
	int input = 0;
	contact con;
	Init_con(&con);//初始化通讯录
	do
	{
		menu();
		printf("请选择:>");
	    scanf("%d", &input);
		switch(input)
		{
		case EXIT:
			printf("退出程序\n");
			break;
		case ADD:
			Add_con(&con);//添加联系人
			break;
		case DELET:
			Delet_con(&con);//删除联系人
			break;
		case MODIFY:
			Modify_con(&con);//修改联系人
			break;
		case SORT:
			SortByName_con(&con);//排序
			break;
		case SEARCH:
			Search_con(&con);//查找联系人
			break;
		case SHOW:
			Show_con(&con);//显示联系人
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	}while(input);
}
int main()
{	
	
	test();
	
	return 0;
}
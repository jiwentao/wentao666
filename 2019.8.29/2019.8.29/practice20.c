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
	Init_con(&con);//��ʼ��ͨѶ¼
	do
	{
		menu();
		printf("��ѡ��:>");
	    scanf("%d", &input);
		switch(input)
		{
		case EXIT:
			printf("�˳�����\n");
			break;
		case ADD:
			Add_con(&con);//�����ϵ��
			break;
		case DELET:
			Delet_con(&con);//ɾ����ϵ��
			break;
		case MODIFY:
			Modify_con(&con);//�޸���ϵ��
			break;
		case SORT:
			SortByName_con(&con);//����
			break;
		case SEARCH:
			Search_con(&con);//������ϵ��
			break;
		case SHOW:
			Show_con(&con);//��ʾ��ϵ��
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	}while(input);
}
int main()
{	
	
	test();
	
	return 0;
}
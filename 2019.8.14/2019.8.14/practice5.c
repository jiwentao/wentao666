#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*1.��ɲ�������Ϸ��*/
#if 0
#include<stdlib.h>
void menu()
{
	printf("*******************************\n");
	printf("***********  1.play  **********\n");
	printf("***********  0.exit  **********\n");
	printf("*******************************\n");
}
void game()
{
	int random_num = rand() % 100 + 1;
	int input = 0;
	while(1)
	{
		printf("������µ�����:>");
		scanf("%d",&input);
		if(input > random_num)
		{
			printf("�´���\n");
		}
		else if(input < random_num)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ�����������ѡ��:>");
			break;
		}
	}while(input);
	return 0;
}
#endif

/*2.д����������������������в�����Ҫ�����֣� 
�ҵ��˷����±꣬�Ҳ�������-1.���۰���ң� */
#if 0
int bin_search(int * p,int k,int sz)
{
	int left = 0,mid = 0;
	int right = sz - 1;
	while(left <= right)
	{
		mid = left + (right - left) / 2;
		if(p[mid] > k)
		{
			right = mid - 1;
		}
		else if(p[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int ret = bin_search(arr,18,sz);
	if( -1 == ret)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ���,�±�Ϊ%d\n",ret);
	}
	return 0;
}
#endif

/*3.��д����ģ��������������ĳ����� 
����������������룬������ȷ����ʾ����¼�ɹ���,������� 
�����������룬����������Ρ����ξ�������ʾ�˳�����*/
#if 0
#include <string.h>
int main()
{
	char password[20] = {0};
	int i;
	for(i = 0; i < 3; i++)
	{
		printf("�������������:>");
	    scanf("%s",password);
		if(strcmp(password,"123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�����������������\n");
		}
	}
	if(i == 3)
	{
		printf("�����������������˳�����\n");
	}

	return 0;
}
#endif

/*4.��дһ�����򣬿���һֱ���ռ����ַ��� 
�����Сд�ַ��������Ӧ�Ĵ�д�ַ��� 
������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ��� 
��������ֲ������ */
int main()
{
	char ch = 0;
	
	while((ch = getchar()) != EOF)
	{
	    if(ch >= 'A' && ch <= 'Z')
		{
			printf("���ַ���Ӧ��Сд��ĸΪ%c\n",ch+32);
		}
		else if(ch >= 'a' && ch <= 'z')
		{
			printf("���ַ���Ӧ�Ĵ�д��ĸΪ%c\n",ch-32);
		}
		else 
			;
	}
	return 0;
}
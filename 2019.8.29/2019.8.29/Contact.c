#define _CRT_SECURE_NO_WARNINGS
#include "Contact.h"
static enum choice
{
	Exit,
	Name,
	Age,
	Sex,
	Tele,
	Addr
};
//chushihua
void Init_con(struct contact * pcon)
{
	    assert(pcon);
		pcon->sz = 0;
		memset(pcon->data,0,sizeof(pcon->data));
}
//tianjia
void Add_con(struct contact * pcon)
{
	int i = 0;
	assert(pcon);
	if(pcon->sz == MAX)
	{
		printf("ͨѶ¼�������޷���ӣ�\n");
		return;
	}
	//¼����Ϣ
	printf("����������:>");
	scanf("%s",pcon->data[pcon->sz].name);
	printf("����������:>");
	scanf("%d",&pcon->data[pcon->sz].age);
	printf("�������Ա�:>");
	scanf("%s",pcon->data[pcon->sz].sex);
	printf("������绰����:>");
	scanf("%s",pcon->data[pcon->sz].tele);
	printf("�������ַ:>");
	scanf("%s",pcon->data[pcon->sz].addr);

	pcon->sz++;
	printf("���ӳɹ�\n");
}
//xianshi
void Show_con(const struct contact * pcon)
{
	int i = 0;
	assert(pcon);
	printf("%-15s\t%-5s\t%-6s\t%-12s\t%-20s\t\n","����","����","�Ա�","�绰","��ַ");
	for(i = 0; i < pcon->sz; i++)
	{
		printf("%-15s\t%-5d\t%-6s\t%-12s\t%-20s\t\n",
			pcon->data[i].name,
			pcon->data[i].age,
			pcon->data[i].sex,
			pcon->data[i].tele,
			pcon->data[i].addr);
	}
}
//shanchu
static int FindByName(struct contact * pcon,char name[])
{
	int i = 0;
	assert(pcon);
	for(i = 0; i < pcon->sz; i++)
	{
		if(strcmp(pcon->data[i].name,name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void Delet_con(struct contact * pcon)
{
	char name[NAME_MAX] = {0};
	int pos = 0;
	int i = 0;
	assert(pcon);
	if(pcon->sz == 0)
	{
		printf("ͨѶ¼�ѿգ��޷�ɾ��\n");
		return;
	}
	printf("������Ҫɾ���˵�����:>");
	scanf("%s",name);
	pos = FindByName(pcon,name);
	if(-1 == pos)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	//ɾ��
	for(i = pos; i < pcon->sz; i++)
	{
		pcon->data[i] = pcon->data[i+1];
	}
	pcon->sz--;
	printf("ɾ���ɹ�\n");
}
//xiugai
static void menu()
{
	printf("***********************\n");
	printf("****1.Name   2.Age ****\n");
	printf("****3.Sex    4.Tele****\n");
	printf("****5.Addr   0.Exit****\n");
	printf("***********************\n");
}
void Modify_con(struct contact * pcon)
{
	char name[NAME_MAX] = {0};
	int pos = 0;
	int input = 0;
	assert(pcon);
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s",name);
	pos = FindByName(pcon,name);
	if(-1 == pos)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}
	do
	{
		menu();
		printf("��ѡ���޸�ѡ��:>");
		scanf("%d",&input);
		switch(input)
		{
		case Exit:
			printf("�޸���ϣ�\n");
			break;
		case Name:
		    printf("������Ҫ�޸ĵ�����:>");
		    scanf("%s",pcon->data[pos].name);
			break;
		case Age:
            printf("������Ҫ�޸ĵ�����:>");
	        scanf("%d",&pcon->data[pos].age);
			break;
		case Sex:
	        printf("������Ҫ�޸ĵ��Ա�:>");
	        scanf("%s",pcon->data[pos].sex);
			break;
		case Tele:
	        printf("������Ҫ�޸ĵĺ���:>");
	        scanf("%s",pcon->data[pos].tele);
			break;
		case Addr:
	        printf("������Ҫ�޸ĵĵ�ַ:>");
	        scanf("%s",pcon->data[pos].addr);
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	
	}while(input);
}
//paixu
void SortByName_con(struct contact * pcon)
{
	int i = 0, j = 0;
	P_Info tem;
	assert(pcon);
	for(i = 0; i < pcon->sz-1; i++)
	{
		for(j = 0; j < pcon->sz-1-i; j++)
		{
			if(strcmp(pcon->data[j].name , pcon->data[j+1].name) > 0)
			{
				tem = *(pcon->data+j);//�����ṹ�����
				*(pcon->data+j) = *(pcon->data+j+1);
				*(pcon->data+j+1) = tem;
			}
		}
	}
}
//chazhao
static void print(struct contact * pcon,int pos)
{
	       if(-1 == pos)
			{
				printf("�Բ��𣬸���ϵ�˲�����\n");
			}
			else
			{
				printf("%-15s\t%-5s\t%-6s\t%-12s\t%-20s\t\n","����","����","�Ա�","�绰","��ַ");
				printf("%-15s\t%-5d\t%-6s\t%-12s\t%-20s\t\n",
					pcon->data[pos].name,
					pcon->data[pos].age,
					pcon->data[pos].sex,
					pcon->data[pos].tele,
					pcon->data[pos].addr);
			}
	
}
static void FindByAge(struct contact *pcon,int age)
{
	int i = 0,count = 0;
	assert(pcon);
	for(i = 0; i < pcon->sz; i++)
	{
		if(pcon->data[i].age == age)
		{
			printf("%-15s\t%-5s\t%-6s\t%-12s\t%-20s\t\n","����","����","�Ա�","�绰","��ַ");
				printf("%-15s\t%-5d\t%-6s\t%-12s\t%-20s\t\n",
					pcon->data[i].name,
					pcon->data[i].age,
					pcon->data[i].sex,
					pcon->data[i].tele,
					pcon->data[i].addr);
		}
		else
		{
			count++;
		}
	}
	if(count == pcon->sz)
	{
		printf("�Բ��𣬸���ϵ�˲����ڣ�\n");
	}
}
static void FindBySex(struct contact *pcon,char sex[])
{
	int i = 0,count = 0;
	assert(pcon);
	for(i = 0; i < pcon->sz; i++)
	{
		if(strcmp(pcon->data[i].sex,sex) == 0)
		{
			printf("%-15s\t%-5s\t%-6s\t%-12s\t%-20s\t\n","����","����","�Ա�","�绰","��ַ");
			printf("%-15s\t%-5d\t%-6s\t%-12s\t%-20s\t\n",
				pcon->data[i].name,
				pcon->data[i].age,
				pcon->data[i].sex,
				pcon->data[i].tele,
				pcon->data[i].addr);
		}
		else
		{
			count++;
		}
	}
	if(count == pcon->sz)
	{
		printf("�Բ��𣬸���ϵ�˲����ڣ�\n");
	}
}
static int FindByTele(struct contact * pcon,char tele[])
{
	int i = 0;
	assert(pcon);
	for(i = 0; i < pcon->sz; i++)
	{
		if(strcmp(pcon->data[i].tele,tele) == 0)
		{
			return i;
		}
	}
	return -1;
}
static int FindByAddr(struct contact * pcon,char addr[])
{
	int i = 0;
	assert(pcon);
	for(i = 0; i < pcon->sz; i++)
	{
		if(strcmp(pcon->data[i].addr,addr) == 0)
		{
			return i;
		}
	}
	return -1;
}
void Search_con(struct contact *pcon)
{
	int input = 0;
	int pos = 0;
	char name[NAME_MAX] = {0};
	int age = 0;
	char sex[SEX_MAX] = {0};
	char tele[TELE_MAX] = {0};
	char addr[ADDR_MAX] = {0};
	assert(pcon);
	if(pcon->sz == 0)
	{
		printf("ͨѶ¼�ѿ�\n");
		return;
	}
	do
	{
		menu();
		printf("��ѡ��Ҫ����ѡ��:>");
		scanf("%d",&input);
		switch(input)
		{
		case Exit:
			printf("�������\n");
			break;
		case Name:
			printf("����������˵�����:>");
			scanf("%s",name);
			pos = FindByName(pcon,name);
			print(pcon,pos);
			break;
		case Age:
			printf("����������˵�����:>");
			scanf("%d",&age);
			FindByAge(pcon,age);
			break;
		case Sex:
			printf("����������˵��Ա�:>");
			scanf("%s",sex);
		    FindBySex(pcon,sex);
			break;
		case Tele:
			printf("����������˵ĵ绰����:>");
			scanf("%s",tele);
			pos = FindByTele(pcon,tele);
			print(pcon,pos);
			break;
		case Addr:
			printf("����������˵ĵ�ַ:>");
			scanf("%s", addr);
			pos = FindByAddr(pcon,addr);
			print(pcon,pos);
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	}while(input);
}
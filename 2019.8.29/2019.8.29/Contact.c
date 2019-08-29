#define _CRT_SECURE_NO_WARNINGS
#include "Contact.h"
void Init_con(struct contact * pcon)
{
	    assert(pcon);
		pcon->sz = 0;
		memset(pcon->data,0,sizeof(pcon->data));
}
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

void Show_con(const struct contact * pcon)
{
	int i = 0;
	assert(pcon);
	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\t\n","����","����","�Ա�","�绰","��ַ");
	for(i = 0; i < pcon->sz; i++)
	{
		printf("%-15s\t%-5d\t%-5s\t%-12s\t%-20s\t\n",
			pcon->data[i].name,
			pcon->data[i].age,
			pcon->data[i].sex,
			pcon->data[i].tele,
			pcon->data[i].addr);
	}
}

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

//void Modify_con(struct contact * pcon)
//{
//	char name[NAME_MAX] = {0};
//	int pos = 0;
//	assert(pcon);
//	printf("������Ҫ�޸��˵�����:>");
//	scanf("%s",name);
//	pos = FindByName(pcon,name);
//	if(-1 == pos)
//	{
//		printf("Ҫ�޸ĵ��˲�����\n");
//		return;
//	}
//	printf("������Ҫ�޸ĵ�����:>");
//	scanf("%s",pcon->data[pos].name);
     
//
//}
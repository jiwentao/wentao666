#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"
void Init_con(struct Contact * pcon)
{
	assert(pcon != NULL);
	pcon->sz = 0;
	pcon->date = (P_Info *)calloc(DEFAULT_SZ,sizeof(P_Info));
	if(pcon->date == NULL)//�ж��Ƿ񿪱ٳɹ�
	{
		printf("%s\n",strerror(errno));
		return;
	}
	pcon->capacity = DEFAULT_SZ;
}

void Destroy_con(struct Contact * pcon)
{
	free(pcon->date);
	pcon->date = NULL;
	pcon->capacity = 0;
	pcon->sz = 0;
}

void Check_Capacity(Contact * pcon)
{
	if(pcon->sz == pcon->capacity)
	{
		P_Info * ptr = (P_Info *)realloc(pcon->date,(pcon->capacity+2)*sizeof(P_Info));
		if(ptr != NULL)
		{
			pcon->date = ptr;
			pcon->capacity += 2;
			printf("���ݳɹ�!\n");
		}
	}
}
void Add_con(struct Contact * pcon)
{
	assert(pcon != NULL);
	/*if(NUM_MAX == pcon->sz)
	{
		printf("��ͨѶ¼�������޷����\n");//��̬���������ж�������
		return;
	}*/

	Check_Capacity(pcon);//�ж��Ƿ���Ҫ����
	
	printf("�������������:>");
	scanf("%s",pcon->date[pcon->sz].name);
	printf("�������������:>");
	scanf("%d",&(pcon->date[pcon->sz].age));
	printf("����������Ա�:>");
	scanf("%s",pcon->date[pcon->sz].sex);
	printf("��������ĵ绰:>");
	scanf("%s",pcon->date[pcon->sz].tele);
	printf("��������ĵ�ַ:>");
	scanf("%s",pcon->date[pcon->sz].addr);

	pcon->sz++;
	printf("���ӳɹ�\n");
}

static int FindByName(Contact * pcon,char name[])
{
	int i = 0;
	for(; i < pcon->sz; i++)
	{
		if(strcmp(pcon->date[i].name,name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void Delete_con(struct Contact * pcon)
{
	char name[NAME_MAX] = "0";
	int pos = 0;
	int i = 0;
	assert(pcon != NULL);
	if(pcon->sz == 0)
	{
		printf("ͨѶ¼�ѿգ��޷�ɾ��!\n");
		return;
	}
	printf("������Ҫɾ���˵�����:>");
	scanf("%s",name);
	pos = FindByName(pcon,name);
	if(pos == -1)
	{
		printf("Ҫɾ���Ĳ�����!\n");
		return;
	}
	//�Ƴ�
	for(i = pos; i < pcon->sz; i++)
	{
		pcon->date[i] = pcon->date[i+1];
	}
	pcon->sz--;
	printf("ɾ���ɹ�!\n");
}

void Display_con(struct Contact * pcon)
{
	int i = 0;
	assert(pcon);
	printf("%-15s\t%5s\t%-8s\t%-12s\t%-25s\n","����","����","�Ա�","�绰","��ַ");
	for(i = 0; i < pcon->sz; i++)
	{
		printf("%-15s\t%5d\t%-8s\t%-12s\t%-25s\n",
			pcon->date[i].name,
			pcon->date[i].age,
			pcon->date[i].sex,
			pcon->date[i].tele,
			pcon->date[i].addr);
	}
}

void SortByName_con(struct Contact * pcon)
{
	int i = 0,j = 0;
	P_Info tem = {0};
	for(; i < pcon->sz-1; i++)
	{
		for(j = 0;j < pcon->sz-1-i; j++)
		{
			if(strcmp(pcon->date[j].name,pcon->date[j+1].name) > 0)
			{
				tem = pcon->date[j];
				pcon->date[j] = pcon->date[j+1];
				pcon->date[j+1] = tem;
			}
		}
	}
}
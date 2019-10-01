#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"
void Check_Capacity(struct Contact * pcon)
{
	P_Info * ptr = NULL;
	if(pcon->sz == pcon->capacity)
	{
		ptr = (P_Info *)realloc(pcon->data,(Num+pcon->capacity)*sizeof(P_Info));
		if(ptr != NULL)
		{
			pcon->data = ptr;
			pcon->capacity += Num; 
			printf("增容成功!\n");
		}
	}
}
void LoadContact(struct Contact * pcon)
{
	P_Info tem = {0};
	FILE * pfRead = fopen("contact.dat","rb");
	if(pfRead == NULL)
	{
		printf("加载信息：打开文件夹失败\n");
		return;
	}
	
	while(fread(&tem,sizeof(P_Info),1,pfRead))
	{
		Check_Capacity(pcon);
		pcon->data[pcon->sz] = tem;
		pcon->sz++;
	}

	fclose(pfRead);
	pfRead = NULL;
}
void Init_Con(struct Contact * pcon)
{
	assert(pcon != NULL);
	pcon->sz = 0;
	pcon->data = (P_Info *)calloc(Num,sizeof(P_Info));
	if(pcon->data == NULL)
	{
		printf("%s\n",strerror(errno));
		return;
	}
	pcon->capacity = Num;
	//加载文件
	LoadContact(pcon);
}

void Destroy_Con(struct Contact * pcon)
{
	assert(pcon != NULL);
	free(pcon->data);
	pcon->data = NULL;
	pcon->capacity = 0;
	pcon->sz = 0;
}


void Add_Con(struct Contact * pcon)
{
	assert(pcon != NULL);
	//检查是否需要增容
	Check_Capacity(pcon);
    //录入信息
	printf("请输入你的名字:>");
	scanf("%s",pcon->data[pcon->sz].Name);
	printf("请输入你的年龄:>");
	scanf("%d",&pcon->data[pcon->sz].Age);
	printf("请输入你的性别:>");
	scanf("%s",pcon->data[pcon->sz].Sex);
	printf("请输入你的电话:>");
	scanf("%s",pcon->data[pcon->sz].Tele);
	printf("请输入你的地址:>");
	scanf("%s",pcon->data[pcon->sz].Adrr);

	pcon->sz++;
	printf("增加成功!\n");
}

void Display_Con(struct Contact * pcon)
{	
	int i = 0;
	assert(pcon != NULL);
	printf("%-15s\t%-5s\t%-8s\t%-12s\t%-20s\t\n","姓名","年龄","性别","电话","地址");
	for( ; i < pcon->sz; i++)
	{
		printf("%-15s\t%-5d\t%-8s\t%-12s\t%-20s\t\n",
			pcon->data[i].Name,
			pcon->data[i].Age,
			pcon->data[i].Sex,
			pcon->data[i].Tele,
			pcon->data[i].Adrr);
	}
}

void SaveContact(struct Contact * pcon)
{
	int i = 0;
	FILE * pfWrite = fopen("contact.dat","wb");
	assert(pcon != NULL);
	if(pfWrite == NULL)
	{
		printf("保存信息：打开文件失败!\n");
		return;
	}
	//保存信息
	for(i = 0; i < pcon->sz; i++)
	{
		fwrite(&pcon->data[i],sizeof(P_Info),1,pfWrite);
	}
	//关闭文件
	fclose(pfWrite);
	pfWrite = NULL;
}
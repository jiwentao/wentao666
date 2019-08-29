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
		printf("通讯录已满，无法添加！\n");
		return;
	}
	//录入信息
	printf("请输入名字:>");
	scanf("%s",pcon->data[pcon->sz].name);
	printf("请输入年龄:>");
	scanf("%d",&pcon->data[pcon->sz].age);
	printf("请输入性别:>");
	scanf("%s",pcon->data[pcon->sz].sex);
	printf("请输入电话号码:>");
	scanf("%s",pcon->data[pcon->sz].tele);
	printf("请输入地址:>");
	scanf("%s",pcon->data[pcon->sz].addr);

	pcon->sz++;
	printf("增加成功\n");
}

void Show_con(const struct contact * pcon)
{
	int i = 0;
	assert(pcon);
	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\t\n","姓名","年龄","性别","电话","地址");
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
		printf("通讯录已空，无法删除\n");
		return;
	}
	printf("请输入要删除人的名字:>");
	scanf("%s",name);
	pos = FindByName(pcon,name);
	if(-1 == pos)
	{
		printf("要删除的人不存在\n");
		return;
	}
	//删除
	for(i = pos; i < pcon->sz; i++)
	{
		pcon->data[i] = pcon->data[i+1];
	}
	pcon->sz--;
	printf("删除成功\n");
}

//void Modify_con(struct contact * pcon)
//{
//	char name[NAME_MAX] = {0};
//	int pos = 0;
//	assert(pcon);
//	printf("请输入要修改人的名字:>");
//	scanf("%s",name);
//	pos = FindByName(pcon,name);
//	if(-1 == pos)
//	{
//		printf("要修改的人不存在\n");
//		return;
//	}
//	printf("请输入要修改的名字:>");
//	scanf("%s",pcon->data[pos].name);
     
//
//}
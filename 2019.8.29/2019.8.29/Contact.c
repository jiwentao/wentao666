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
//xianshi
void Show_con(const struct contact * pcon)
{
	int i = 0;
	assert(pcon);
	printf("%-15s\t%-5s\t%-6s\t%-12s\t%-20s\t\n","姓名","年龄","性别","电话","地址");
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
	printf("请输入要修改人的名字:>");
	scanf("%s",name);
	pos = FindByName(pcon,name);
	if(-1 == pos)
	{
		printf("要修改的人不存在\n");
		return;
	}
	do
	{
		menu();
		printf("请选择修改选项:>");
		scanf("%d",&input);
		switch(input)
		{
		case Exit:
			printf("修改完毕！\n");
			break;
		case Name:
		    printf("请输入要修改的名字:>");
		    scanf("%s",pcon->data[pos].name);
			break;
		case Age:
            printf("请输入要修改的年龄:>");
	        scanf("%d",&pcon->data[pos].age);
			break;
		case Sex:
	        printf("请输入要修改的性别:>");
	        scanf("%s",pcon->data[pos].sex);
			break;
		case Tele:
	        printf("请输入要修改的号码:>");
	        scanf("%s",pcon->data[pos].tele);
			break;
		case Addr:
	        printf("请输入要修改的地址:>");
	        scanf("%s",pcon->data[pos].addr);
			break;
		default:
			printf("选择错误，重新选择！\n");
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
				tem = *(pcon->data+j);//交换结构体变量
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
				printf("对不起，该联系人不存在\n");
			}
			else
			{
				printf("%-15s\t%-5s\t%-6s\t%-12s\t%-20s\t\n","姓名","年龄","性别","电话","地址");
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
			printf("%-15s\t%-5s\t%-6s\t%-12s\t%-20s\t\n","姓名","年龄","性别","电话","地址");
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
		printf("对不起，该联系人不存在！\n");
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
			printf("%-15s\t%-5s\t%-6s\t%-12s\t%-20s\t\n","姓名","年龄","性别","电话","地址");
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
		printf("对不起，该联系人不存在！\n");
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
		printf("通讯录已空\n");
		return;
	}
	do
	{
		menu();
		printf("请选择要查找选项:>");
		scanf("%d",&input);
		switch(input)
		{
		case Exit:
			printf("查找完毕\n");
			break;
		case Name:
			printf("请输入查找人的名字:>");
			scanf("%s",name);
			pos = FindByName(pcon,name);
			print(pcon,pos);
			break;
		case Age:
			printf("请输入查找人的年龄:>");
			scanf("%d",&age);
			FindByAge(pcon,age);
			break;
		case Sex:
			printf("请输入查找人的性别:>");
			scanf("%s",sex);
		    FindBySex(pcon,sex);
			break;
		case Tele:
			printf("请输入查找人的电话号码:>");
			scanf("%s",tele);
			pos = FindByTele(pcon,tele);
			print(pcon,pos);
			break;
		case Addr:
			printf("请输入查找人的地址:>");
			scanf("%s", addr);
			pos = FindByAddr(pcon,addr);
			print(pcon,pos);
			break;
		default:
			printf("选择错误，重新选择！\n");
			break;
		}
	}while(input);
}
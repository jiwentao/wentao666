#include<stdio.h>
#include<string.h>
#include<assert.h>

#define MAX 1000
#define NAME_MAX 20
#define SEX_MAX 6
#define TELE_MAX 12
#define ADDR_MAX 20

typedef struct P_Info //人的信息
{
	char name[NAME_MAX];
	short age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}P_Info;

typedef struct contact 
{
	 P_Info data[MAX];
	 int sz;
}contact;

enum Option
{
	EXIT,
	ADD,
	DELET,
	MODIFY,
	SORT,
	SEARCH,
	SHOW
};
void Init_con(struct contact * pcon);
void Add_con(struct contact * pcon);
void Show_con(const struct contact * pcon);
void Delet_con(struct contact * pcon);
void Modify_con(struct contact * pcon);
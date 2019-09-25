#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<errno.h>

#define NAME_MAX 20
#define TELE_MAX 12
#define SEX_MAX 8
#define ADDR_MAX 25
#define NUM_MAX 1000
#define DEFAULT_SZ 3

enum option
{
	EXIT,
	ADD,
	DELETE,
	SEARCH,
	DISPLAY,
	SORT,
	MODIFY
};
typedef struct P_Info
{
	char name[NAME_MAX];
	short age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}P_Info;

typedef struct Contact
{
	//P_Info data[NUM_MAX];
	P_Info * date;
	int sz;//有效个数
	int capacity;//容量
}Contact;

void Init_con(struct Contact * pcon);
void Add_con(struct Contact * pcon);
void Destroy_con(struct Contact * pcon);
void Delete_con(struct Contact * pcon);
void Display_con(struct Contact * pcon);
void SortByName_con(struct Contact * pcon);
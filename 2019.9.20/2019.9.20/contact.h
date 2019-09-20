#include<stdio.h>

#define NAME_MAX 20
#define TELE_MAX 12
#define SEX_MAX 8
#define ADDR_MAX 25
#define NUM_MAX 1000

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
	P_Info date[NUM_MAX];
	int sz;
}Contact;

void Init_con(struct Contact * pcon);
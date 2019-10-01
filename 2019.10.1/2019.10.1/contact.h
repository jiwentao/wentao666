#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

#define NAME_MAX 20
#define SEX_MAX 10
#define TELE_MAX 12
#define ADRR_MAX 25
#define Num 10

enum option
{
	EXIT,
	ADD,
	DELETE,
	MODIFY,
	DISPLAY,
	SORT,
	SEARCH
};

typedef struct P_Info
{
	char Name[NAME_MAX];
	short Age;
	char Sex[SEX_MAX];
	char Tele[TELE_MAX];
	char Adrr[ADRR_MAX];
}P_Info;

typedef struct Contact
{
	P_Info * data;
	int capacity;
	int sz;
}Contact;

void Init_Con(struct Contact * pcon);
void Destroy_Con(struct Contact * pcon);
void Add_Con(struct Contact * pcon);
void Display_Con(struct Contact * pcon);
void SaveContact(struct Contact * pcon);
void LoadContact(struct Contact * pcon);
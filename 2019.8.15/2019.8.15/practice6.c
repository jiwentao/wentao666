#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ���� 
����9�����9*9�ھ�������12�����12*12�ĳ˷��ھ���*/
#if 0 
void Print(int n)
{
	int i = 0,j = 0,k = 0;
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= i; j++)
		{
			k = i * j;
			printf("%d * %d = %d ",j,i,k);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	printf("��������������:>");
	scanf("%d",&n);
	Print(n);
	return 0;
}
#endif

/*2.ʹ�ú���ʵ���������Ľ���*/
#if 0
void Exchange(int * p1,int * p2)
{
	*p1 = (*p1) + (*p2);
	*p2 = (*p1) - (*p2);
	*p1 = (*p1) - (*p2);
}
int main()
{
	int a = 0,b = 0;
	printf("��������������:>");
	scanf("%d%d",&a,&b);
	Exchange(&a,&b);
	printf("a = %d,b = %d\n",a,b);
	return 0;
}
#endif

/*3.ʵ��һ�������ж�year�ǲ������ꡣ*/
#if 0
void is_year(int y)
{
	if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
	{
		printf("%d������\n",y);
	}
	else
	{
		printf("%d��������\n",y);
	}
}
int main()
{
	int year = 0;
	printf("���������:>");
	scanf("%d",&year);
	is_year(year);
	return 0;
}
#endif

/*4. ����һ�����飬 ʵ�ֺ���init������ʼ�����顢 
ʵ��empty����������顢 ʵ��reverse���������������Ԫ�ص����á� 
Ҫ���Լ���ƺ����Ĳ���������ֵ��*/
#include<string.h>
void init(int  p[10])   //��ʼ������
{
	int i = 0;
	for(i = 0; i < 10; i++)
	{
		p[i] = i;
	}
}
void empty(int * p,int sz)  //�������
{
	memset(p,0,sz*sizeof(p[0]));
}
void reverse(int * p,int sz)   //��������
{
	int i = 0;
	int tem = 0;
	for(i = 0; i < sz/2; i++)
	{
		tem = p[i];
		p[i] = p[sz-1-i];
		p[sz-1-i] = tem;
	}
}
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	empty(arr,sz);
	init(arr);
	for(i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	reverse(arr,sz);
	for(i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}

/*5.ʵ��һ���������ж�һ�����ǲ���������*/
#if 0
#include <math.h>
int is_prime(int n)
{
	int i;
	for(i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n = 0,ret = 0;
	printf("��������������:>");
	scanf("%d",&n);
	ret = is_prime(n);
	if(ret == 0)
	{
		printf("%d��������\n",n);
	}
	else
	{
		printf("%d������\n",n);
	}
	return 0;
}
#endif

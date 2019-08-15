#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定， 
输入9，输出9*9口诀表，输入12，输出12*12的乘法口诀表。*/
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
	printf("请输入任意整数:>");
	scanf("%d",&n);
	Print(n);
	return 0;
}
#endif

/*2.使用函数实现两个数的交换*/
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
	printf("请输入两个数字:>");
	scanf("%d%d",&a,&b);
	Exchange(&a,&b);
	printf("a = %d,b = %d\n",a,b);
	return 0;
}
#endif

/*3.实现一个函数判断year是不是润年。*/
#if 0
void is_year(int y)
{
	if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
	{
		printf("%d是闰年\n",y);
	}
	else
	{
		printf("%d不是闰年\n",y);
	}
}
int main()
{
	int year = 0;
	printf("请输入年份:>");
	scanf("%d",&year);
	is_year(year);
	return 0;
}
#endif

/*4. 创建一个数组， 实现函数init（）初始化数组、 
实现empty（）清空数组、 实现reverse（）函数完成数组元素的逆置。 
要求：自己设计函数的参数，返回值。*/
#include<string.h>
void init(int  p[10])   //初始化数组
{
	int i = 0;
	for(i = 0; i < 10; i++)
	{
		p[i] = i;
	}
}
void empty(int * p,int sz)  //清空数组
{
	memset(p,0,sz*sizeof(p[0]));
}
void reverse(int * p,int sz)   //逆置数组
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

/*5.实现一个函数，判断一个数是不是素数。*/
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
	printf("请输入任意整数:>");
	scanf("%d",&n);
	ret = is_prime(n);
	if(ret == 0)
	{
		printf("%d不是素数\n",n);
	}
	else
	{
		printf("%d是素数\n",n);
	}
	return 0;
}
#endif

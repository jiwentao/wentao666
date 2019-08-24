#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/* 1. 给定两个整形变量的值，将两个值的内容进行交换。 
   2. 不允许创建临时变量，交换两个数的内容（附加题）*/
#if 0
int main()
{
	int a = 8;
	int b = 9;

	/*a = a + b;   //方法一
	b = a - b;
	a = a - b;*/

	a = a ^ b;   //方法二
	b = a ^ b;
	a = a ^ b;

	printf("a = %d, b = %d\n",a,b);
	return 0;
}
#endif

/* 3.求10 个整数中最大值。*/
#if 0
int main()
{
	int arr[10] = {1,5,9,45,12,360,4,8,7,5};
	int i = 0;
	int j = i+1;
	while(i < 9 && j < 10)
	{
		if(arr[i] >= arr[j])
		{
			j++;
		}
		else
		{
			i = j;
			j++;
		}
	}
	printf("最大值为%d\n",arr[i]);
	return 0;
}
#endif

/* 4.将三个数按从大到小输出。*/
#if 0
int main()
{
	int a = 6, b = 3, c = 9;
	int t = 0;
	if(a < b)
	{
		t = a;
		a = b;
	    b = t;
	}
	if(a < c)
	{
		t = a;
		a = c;
		c = t;
	}
	if(b < c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("a = %d,b = %d,c = %d\n",a,b,c);
	return 0;
}
#endif

/* 5.求两个数的最大公约数。*/
int main()
{
	int a = 12,b = 16;
	int i = 0;
	int min = (a > b ? a : b);

	for(i = min;i >= 1;i--)
	{
		if(a % i == 0 && b % i == 0)
		{
			printf("a和b的最大公约数为%d\n",i);
			break;
		}
	}
	return 0;
}

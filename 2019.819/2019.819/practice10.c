#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*1. 
写一个函数返回参数二进制中 1 的个数 
比如： 15 0000 1111 4 个 1 
程序原型： 
int count_one_bits(unsigned int value) 
{ 
// 返回 1的位数 
} 
*/
#if 0
int count_one_bits(unsigned int value)
{
	int n = 0,i = 0;
	for(i = 0; i < 32; i++)
	{ 
		if(((value>>i) & 1) == 1)
			n++;    
	}
	return n;
}

int main()
{
	int input = 0;
	int ret = 0;
	printf("请输入一个整数:>");
	scanf("%d", &input);
	ret = count_one_bits(input);
	printf("%d\n",ret);
	return 0;
}
#endif

/* 2.获取一个数二进制序列中所有的偶数位和奇数位， 
分别输出二进制序列。*/
#if 0
int main()
{
	int input = 0, i = 0;
	int arr[40] = {0};
	printf("请输入一个整数:>");
	scanf("%d", &input);
	for(i = 0; i < 32; i++)
	{
		if(((input>>i) & 1) == 1)
		{
			arr[i] = 1;
		}
		else
		{
			arr[i] = 0;
		}
	}
	printf("二进制奇数位序列:");
	for(i = 31; i >= 0; i -= 2)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	printf("二进制偶数位序列:");
	for(i = 31; i >= 0; i -= 2)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	return 0;
}
#endif
/* 3. 输出一个整数的每一位。*/
#if 0
int main()
{
	int input = 0, i = 0;
	int arr[40] = {0};
	printf("请输入一个整数:>");
	scanf("%d", &input);
	for(i = 0; i < 32; i++)
	{
		if(((input>>i) & 1) == 1)
		{
			arr[i] = 1;
		}
		else
		{
			arr[i] = 0;
		}
	}

	for(i = 31; i >= 0; i--)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	return 0;
}
#endif
/*4.编程实现： 
两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
输入例子: 
1999 2299 
输出例子:7	*/
#if 0
int main()
{
	int m = 0, n = 0;
	int i = 0,count = 0;
	printf("请输入任意的两个整数:>");
	scanf("%d%d", &m,&n);
	for(i = 0; i < 32; i++)
	{
		if( ((n>>i)&1) != ((m>>i)&1))
			count++;
	}
	printf("%d\n",count);
	return 0;
}
#endif


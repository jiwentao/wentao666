#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/* 1.递归和非递归分别实现求第n个斐波那契数。*/
#if 0
int fib1(int n)   //递归
{
		if(n <= 2)
			return 1;
		else
			return fib1(n-1) + fib1(n-2);
}
int fib2(int n)   //非递归
{
	int a = 1, b =1;
	int c =0;
	while(n>2)
	{
		n -= 1;
		c = a;
		a = b;
		b = a + c;
	}
	return b;
}
int main()
{
	int input = 0,ret = 0;
	printf("请输入第n个斐波那契数:>");
	scanf("%d", &input);
	ret = fib1(input);
	printf("第n个斐波那契数 = %d\n",ret);
	ret = fib2(input);
	printf("第n个斐波那契数 = %d\n",ret);
	return 0;
}
#endif
/* 2.编写一个函数实现n^k，使用递归实现 */
#if 0
int Power(int n,int k)
{
	if(k < 1)
		return 1;
	else
		return n*Power(n,k-1);
}
int main()
{
	int n = 0,k = 0;
	int ret;
	printf("请输入一个数及其次幂:>");
	scanf("%d%d", &n,&k);
	ret = Power(n,k);
	printf("%d的%d次幂为%d\n",n,k,ret);
	return 0;
}
#endif
/* 3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 
   例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19  */
#if 0
int DigitSum(int n)
{
	int m = 0;
	if(n <= 9)
	{
		return n;
	}
	else
	{
		m = n % 10;
		return  m+DigitSum(n/10);
	}
}
int main()
{
	int input = 0;
	int ret;
	printf("请输入一个非负整数:>");
	scanf("%d", &input);
	ret = DigitSum(input);
	printf("%d\n",ret);
	return 0;
}
#endif
/* 4. 编写一个函数 reverse_string(char * string)（递归实现） 
      实现：将参数字符串中的字符反向排列。 
      要求：不能使用C函数库中的字符串操作函数。*/
#if 0
void reverse_string(char * string)
{
	if(*string != '\0')
	{
		reverse_string(++string);
		printf("%c",*(string-1));
	}	
}
int main()
{
	char p[] = "abcdef";
	reverse_string(p);
	printf("\n");
	return 0;
}
#endif
/* 5.递归和非递归分别实现strlen */
#if 0
#include<assert.h>
int my_strlen1(const char * string)  //递归
{
	assert(string != NULL);
	if(*string == '\0')
	      return 0;
	else
		return 1+my_strlen1(string+1);
}
int my_strlen2(const char * string)
{
	int count = 0;
	assert(string != NULL);
	while(*string != '\0')
	{
		count++;
		string++;
	}
	return count;
}
int my_strlen3(const char * string)
{
	char * p = string;
	assert(string != NULL);
	while(*string != '\0')
	{
		string++;
	}
	return string-p;
}
int main()
{
	char * p = "abcdef";
	int ret = 0;
	ret = my_strlen1(p);
	printf("%d\n",ret);
	ret = my_strlen2(p);
	printf("%d\n",ret);
	ret = my_strlen3(p);
	printf("%d\n",ret);
	return 0;
}
#endif
/* 6.递归和非递归分别实现求n的阶乘 */
#if 0
int factorial1(int n)   //递归
{
	if(n < 2)
		return 1;
	else
		return n*factorial1(n-1);
}
int factorial2(int n)   //非递归
{
	int result = 1;
	while(n > 1)
	{
		result *= n;
		n--;
	}
	return result;
}
int main()
{
	int input = 0;
	int ret;
	printf("请输入一个整数:>");
	scanf("%d", &input);
	ret = factorial1(input);
	printf("%d\n",ret);
	ret = factorial2(input);
	printf("%d\n",ret);
	return 0;
}
#endif
/* 7.递归方式实现打印一个整数的每一位 */
void print(int n)
{
	if(n > 9)
	{
		print(n/10);
	}
	printf("%d ",n%10);
}
int main()
{
	int n = 2356;
	print(n);
	printf("\n");
	return 0;
}
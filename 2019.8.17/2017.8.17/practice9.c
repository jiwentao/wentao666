#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/* 1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������*/
#if 0
int fib1(int n)   //�ݹ�
{
		if(n <= 2)
			return 1;
		else
			return fib1(n-1) + fib1(n-2);
}
int fib2(int n)   //�ǵݹ�
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
	printf("�������n��쳲�������:>");
	scanf("%d", &input);
	ret = fib1(input);
	printf("��n��쳲������� = %d\n",ret);
	ret = fib2(input);
	printf("��n��쳲������� = %d\n",ret);
	return 0;
}
#endif
/* 2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ�� */
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
	printf("������һ�����������:>");
	scanf("%d%d", &n,&k);
	ret = Power(n,k);
	printf("%d��%d����Ϊ%d\n",n,k,ret);
	return 0;
}
#endif
/* 3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ� 
   ���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19  */
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
	printf("������һ���Ǹ�����:>");
	scanf("%d", &input);
	ret = DigitSum(input);
	printf("%d\n",ret);
	return 0;
}
#endif
/* 4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣� 
      ʵ�֣��������ַ����е��ַ��������С� 
      Ҫ�󣺲���ʹ��C�������е��ַ�������������*/
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
/* 5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen */
#if 0
#include<assert.h>
int my_strlen1(const char * string)  //�ݹ�
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
/* 6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳� */
#if 0
int factorial1(int n)   //�ݹ�
{
	if(n < 2)
		return 1;
	else
		return n*factorial1(n-1);
}
int factorial2(int n)   //�ǵݹ�
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
	printf("������һ������:>");
	scanf("%d", &input);
	ret = factorial1(input);
	printf("%d\n",ret);
	ret = factorial2(input);
	printf("%d\n",ret);
	return 0;
}
#endif
/* 7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ */
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
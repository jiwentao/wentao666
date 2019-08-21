#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*1.编写函数： 
unsigned int reverse_bit(unsigned int value); 
这个函数的返回值value的二进制位模式从左到右翻转后的值。 
如： 
在32位机器上25这个值包含下列各位： 
00000000000000000000000000011001 
翻转后：（2550136832） 
10011000000000000000000000000000 
程序结果返回： 
2550136832 */
#if 0
unsigned int power(int n,int k)
{
	if(k < 1)
		return 1;
	else
		return n * power(n,k-1);
}
unsigned int reverse_bit(int n)
{
	int i = 0;
	unsigned int sum = 0;
	for(i = 0; i < 32; i++)
	{
		if(n>>i & 1 == 1)
		{
			sum += power(2,(32-1-i));
		}
	}
	return sum;
}
int main()
{
	int input = 0;
	unsigned int result = 0;
	printf("请输入一个整数:>");
	scanf("%d", &input);
	result = reverse_bit(input);
	printf("%u\n",result);
	return 0;
}
#endif
/* 2.不使用（a+b）/2这种方式，求两个数的平均值。*/
#if 0
int main()
{
	int a = 3;
	int b = 5;
	int ave = 0;
	ave = a + (b - a) / 2;
	printf("%d\n",ave);
	return 0;
}
#endif
/*3.编程实现： 
一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。 
请找出这个数字。（使用位运算） */
#if 0
int main()
{
	int arr[] = {2,3,8,3,9,2,8};
	int num = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int t = arr[0];
	for(i = 1; i < num; i++)
	{
		t = t ^ arr[i];
	}
	printf("%d\n",t);
	return 0;
}
#endif

/* 4.有一个字符数组的内容为:"student a am i", 
     请你将数组的内容改为"i am a student". 
     要求： 
     不能使用库函数。 
     只能开辟有限个空间（空间个数和字符串的长度无关）。 
*/
#include<assert.h>
#include<string.h>
void reverse_all(char * start,char * end)
{
	char tem;
	assert(start != NULL);
	assert(end != NULL);
	
	while(start <= end)
	{
		tem = *start;
		*start = *end;
		*end = tem;
		start++;
		end--;
	}
}
char * reverse(char * str)
{
	int len = strlen(str);
	char * left = str;
	char * right = NULL;
	char * p = str;
	reverse_all(str,str+len-1);
	while(*str)
	{
		left = str;  //确定单词的头
		while((*str != ' ')&& (*str != '\0')) //找一个单词
		{
			str++;
		}
		right = str - 1;  //确定单词的尾
		reverse_all(left,right);//对单词逆序
		if(*str == ' ')
		{
			str++;
		}
	}
	return p;
}
int main()
{
	char arr[20] = "student a am i";
	printf("变换前：%s\n",arr);
	printf("变换后：%s\n",reverse(arr));
	return 0;
}
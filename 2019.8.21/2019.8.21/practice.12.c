#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*1.��д������ 
unsigned int reverse_bit(unsigned int value); 
��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ�� 
�磺 
��32λ������25���ֵ�������и�λ�� 
00000000000000000000000000011001 
��ת�󣺣�2550136832�� 
10011000000000000000000000000000 
���������أ� 
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
	printf("������һ������:>");
	scanf("%d", &input);
	result = reverse_bit(input);
	printf("%u\n",result);
	return 0;
}
#endif
/* 2.��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ��*/
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
/*3.���ʵ�֣� 
һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ� 
���ҳ�������֡���ʹ��λ���㣩 */
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

/* 4.��һ���ַ����������Ϊ:"student a am i", 
     ���㽫��������ݸ�Ϊ"i am a student". 
     Ҫ�� 
     ����ʹ�ÿ⺯���� 
     ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ��� 
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
		left = str;  //ȷ�����ʵ�ͷ
		while((*str != ' ')&& (*str != '\0')) //��һ������
		{
			str++;
		}
		right = str - 1;  //ȷ�����ʵ�β
		reverse_all(left,right);//�Ե�������
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
	printf("�任ǰ��%s\n",arr);
	printf("�任��%s\n",reverse(arr));
	return 0;
}
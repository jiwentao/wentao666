#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*1. 
дһ���������ز����������� 1 �ĸ��� 
���磺 15 0000 1111 4 �� 1 
����ԭ�ͣ� 
int count_one_bits(unsigned int value) 
{ 
// ���� 1��λ�� 
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
	printf("������һ������:>");
	scanf("%d", &input);
	ret = count_one_bits(input);
	printf("%d\n",ret);
	return 0;
}
#endif

/* 2.��ȡһ�������������������е�ż��λ������λ�� 
�ֱ�������������С�*/
#if 0
int main()
{
	int input = 0, i = 0;
	int arr[40] = {0};
	printf("������һ������:>");
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
	printf("����������λ����:");
	for(i = 31; i >= 0; i -= 2)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	printf("������ż��λ����:");
	for(i = 31; i >= 0; i -= 2)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	return 0;
}
#endif
/* 3. ���һ��������ÿһλ��*/
#if 0
int main()
{
	int input = 0, i = 0;
	int arr[40] = {0};
	printf("������һ������:>");
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
/*4.���ʵ�֣� 
����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 
��������: 
1999 2299 
�������:7	*/
#if 0
int main()
{
	int m = 0, n = 0;
	int i = 0,count = 0;
	printf("�������������������:>");
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


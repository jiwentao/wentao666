#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/* 1. �����������α�����ֵ��������ֵ�����ݽ��н����� 
   2. ����������ʱ���������������������ݣ������⣩*/
#if 0
int main()
{
	int a = 8;
	int b = 9;

	/*a = a + b;   //����һ
	b = a - b;
	a = a - b;*/

	a = a ^ b;   //������
	b = a ^ b;
	a = a ^ b;

	printf("a = %d, b = %d\n",a,b);
	return 0;
}
#endif

/* 3.��10 �����������ֵ��*/
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
	printf("���ֵΪ%d\n",arr[i]);
	return 0;
}
#endif

/* 4.�����������Ӵ�С�����*/
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

/* 5.�������������Լ����*/
int main()
{
	int a = 12,b = 16;
	int i = 0;
	int min = (a > b ? a : b);

	for(i = min;i >= 1;i--)
	{
		if(a % i == 0 && b % i == 0)
		{
			printf("a��b�����Լ��Ϊ%d\n",i);
			break;
		}
	}
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/* 1.һ��������ֻ�����������ǳ���һ�Σ� 
     �����������ֶ����������Ρ� 
     �ҳ����������֣����ʵ�֡�*/
#if 0
int main()
{
	int arr[10] = {6,2,5,8,2,6,5,7};
	int i = 0, j = 0,ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for(i = 0; i < sz; i++)
	{
		for(j = i+1; j < sz; j++)
		{
			ret = arr[i] ^ arr[j];
			if(ret == 0)
			{
				arr[i] = 0;
				arr[j] = 0;
				break;
			}
		}
	}
	for(i = 0; i < sz; i++)
	{
		if(arr[i] != 0)
		{
			printf("%dֻ������һ��\n",arr[i]);
		}
	}
	return 0;
}
#endif

/* 2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ�� 
     ��20Ԫ�����Ժȶ�����ˮ��*/
#if 0
int bin_div(int n)
{
	if(n<2)
	{
		return 1;
	}
	return n+bin_div(n/2);
}
int main()
{
	int money = 20;
	int ret = bin_div(money);
	printf("���Ժ�%dƿ��ˮ\n",ret);
	return 0;
}
#endif

/* 3.ģ��ʵ��strcpy */
#if 0
#include <assert.h>
char *strcpy(char * str1,const char * str2)
{
	assert(str2 != NULL);
	while(*str2)
	{
		*str1 = *str2;
		str1++;
		str2++;	
	}
	*str1 = '\0';
	return str1;
}
int main()
{
	char str1[10] = "abcde";
	const char str2[10] = "bit";
	strcpy(str1,str2);
	printf("%s\n",str1);
	return 0;
}
#endif

/* 4.ģ��ʵ��strcat */
#include<assert.h>
char *strcat(char * str1,const char * str2)
{
	assert(str2 != NULL);
	while(*str1++)
	      ;
	str1--;
	while(*str2)
	{
		*str1++ = *str2++;
	}
	*str1 = '\0';
	return str1;
}
int main()
{
	char str1[10] = "abcdef";
	const char str2[10] = "bit";
	strcat(str1,str2);
	printf("%s\n",str1);
	return 0;
}
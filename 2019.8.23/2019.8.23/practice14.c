#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
/*1.ʵ��һ�����������������ַ����е�k���ַ��� 
    ABCD����һ���ַ��õ�BCDA 
    ABCD���������ַ��õ�CDAB */
#if 1
void left_r(char * p,int k)
{
	int i = 1;
	char * head = p;
	char tem = *head;
	for(i = 1; i <= k; i++)
	{
		head = p;
		tem = *head;
		while(*(head+1) != '\0')
		{
			 *head = *(head+1);
			 head++;
		}
		*(head) = tem;
	}
}
int main()
{
	char arr1[] = "AABCD";
	int k = 0;
	printf("��������Ҫ�ƶ����ַ�����:>");
	scanf("%d", &k);
	left_r(arr1,k);
	printf("%s\n",arr1);
	return 0;
}
#endif
/* 2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����*/
#if 0
int comp(char * p1,char * p2,int k)
{
	int i = 1;
	char * head = p1;
	char tem = *head;
	for(i = 1; i <= k; i++)
	{
		head = p1;
		tem = *head;
		while(*(head+1) != '\0')
		{
			 *head = *(head+1);
			 head++;
		}
		*(head) = tem;
		if(strcmp(p2,p1) == 0)
			return 1;
	}
	return 0;
}
int main()
{
	char arr1[] = "AABCD";
	char arr2[] = "BCDAv";
	int ret = 0;
	int k = strlen(arr1);
	ret = comp(arr1,arr2,k);
	if(ret == 1)
		printf("arr2��arr1��ת֮��õ���\n");
	else
		printf("��ת֮��ò���\n");
	return 0;
}
#endif

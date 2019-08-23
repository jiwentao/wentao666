#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
/*1.实现一个函数，可以左旋字符串中的k个字符。 
    ABCD左旋一个字符得到BCDA 
    ABCD左旋两个字符得到CDAB */
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
	printf("请输入需要移动的字符个数:>");
	scanf("%d", &k);
	left_r(arr1,k);
	printf("%s\n",arr1);
	return 0;
}
#endif
/* 2.判断一个字符串是否为另外一个字符串旋转之后的字符串。*/
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
		printf("arr2是arr1旋转之后得到的\n");
	else
		printf("旋转之后得不到\n");
	return 0;
}
#endif

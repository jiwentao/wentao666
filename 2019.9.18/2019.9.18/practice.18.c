#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
/* 练习使用qsort函数排序各种类型的数据 */
#if 0
int cmp(const void * p1,const void * p2)  //对整形数据排序
{
	return (*(int*)p1 - *(int*)p2);
}
int main()
{
	int arr[] = {4,2,1,9,7,6,3,5,8,0};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int i = 0;
	qsort(arr,sz,sizeof(int),cmp);
	for(i = 0; i < sz; i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	return 0;
}
#endif
#if 0
int cmp(const void * q1,const void * q2)
{
	return (*(char*)q1 - *(char*)q2);
}
int main()
{
	char arr[] = {'c','s','l','h','m'};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int i = 0;
	qsort(arr,sz,sizeof(char),cmp);
	for(i = 0; i < sz; i++)
	{
		printf("%c ",arr[i]);
	}
	printf("\n");
	return 0;
}
#endif
#if 0
#include <string.h>
typedef struct STU
{
	char name[20];
	int age;
}STU;
int cmp_name(const void * p1,const void * p2)
{
	return strcmp((*(struct STU *)p1).name,(*(struct STU *)p2).name);
}
int main()
{
	STU arr[] = {{"zhangsan",23},{"lisi",15},{"wangwu",18},{"heliu",27},{"caoqi",9}};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int i = 0;
	qsort(arr,sz,sizeof(STU),cmp_name);
	for(i = 0; i < sz; i++)
	{
		printf("%s,%d ",arr[i].name,arr[i].age);
	}
	printf("\n");
	return 0;
}
#endif

/* 模仿qsort的功能实现一个通用的冒泡排序 */
int int_cmp(const void * p1,const void * p2)
{
	return *(int*)p1 - *(int*)p2;
}
void swap(void * q1,void * q2,int size)
{
	int i = 0;
	char temp = 0;
	for(i = 0; i < size; i++)
	{
		temp = *((char*)q1+i);
		 *((char*)q1+i) = *((char*)q2+i);
		*((char*)q2+i) = temp;
	}
}
void bubble(void * base,int count,int size,int (*cmp)(const void * e1,const void * e2))
{
	int i = 0, j = 0;
	for(i = 0;i < count-1; i++)
	{
		for(j = 0; j < count-1-i; j++)
		{
			if(cmp(((char*)base + j*size),((char*)base + (j+1)*size)) > 0)
			{
				swap((char*)base + j*size,(char*)base + (j+1)*size,size);
			}
		}
	}
}
int main()
{
	int arr[] = {4,3,9,5,7,1,8,2,6,0};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int i = 0;
	bubble(arr,sz,sizeof(int),int_cmp);
	for(i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
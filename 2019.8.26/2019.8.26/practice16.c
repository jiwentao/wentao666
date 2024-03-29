#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
/* 1.实现strcpy */
#if 0
char * my_strcpy(char * str1,const char * str2)
{
	char * p = str1;
	assert(str1 && str2);
	while(*str1++ = *str2++)
		;
	return p;
}
int main()
{
	char str[20] = "abcdefghj";
	const char * p = "love";
	my_strcpy(str,p);
	printf("%s\n",str);
	return 0;
}
#endif

/* 2.实现strcat */
#if 0
char * my_strcat(char * str1,const char * str2)
{
	char * p = str1;
	assert(str1 && str2);
	while(*str1)
	{
		str1++;
	}
	while(*str1++ = *str2++)
		;
	return p;
}
int main()
{
	char str[20] = "hello ";
	const char * p = "world";
	my_strcat(str,p);
	printf("%s\n",str);
	return 0;
}
#endif

/* 3.实现strstr */
#if 0
char * my_strstr(const char * str1,const char * str2)
{
	 const char * p1 = str1;
	const char * p2 = str2;
	char * start = p1;
	assert(str1 && str2);
	while(*start)
	{
		p1 = start;
		p2 = str2;
		while(*p1 && *p2 && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if(*p2 == '\0')
		{
			return (char *)start;
		}
		start++;
	}
	return NULL;
}
int main()
{
	const char * str1 = "abcccdefg";
	const char * str2 = "cdef";
	char * ret = my_strstr(str1,str2);
	if(ret != NULL)
	{
		printf("%s\n",ret);
	}
	else
		printf("找不到！\n");
	return 0;
}
#endif

/* 4.实现strchr */
#if 0
char * my_strchr(const char * str,int ch)
{
	char * p = (char *)str;
	assert(str != NULL);
	while(*p)
	{
		if(*p == ch)
		{
			return p;
		}
		p++;
	}
	return NULL;
}
int main()
{
	const char * str = "abcdefgh";
	int ch = 'd';
	char * ret = my_strchr(str,ch);
	if(ret != NULL)
	{
		printf("%c\n",*ret);
	}
	else
	{
		printf("没有找到字符%c\n",ch);
	}
	return 0;
}
#endif

/* 5.实现strcmp */
#if 0
int my_strcmp(const char * str1,const char * str2)
{
	assert(str1 && str2);
	while(*str1 == *str2)
    {
		if(*str1 == '\0')
		{
			return 0;	
		}	
		str1++;
		str2++;
	}
	return *str1 - *str2;
}
int main()
{
	const char * str1 = "hjdfjh";
	const char * str2 = "hjcd";
	int ret = my_strcmp(str1,str2);
	if(ret > 0)
	{
		printf("str1大于str2\n");
	}
	else if(ret < 0)
	{
		printf("str1小于str2\n");
	}
	else
	{
		printf("str1等于str2\n");
	}
	return 0;
}
#endif

/* 6.实现memcpy */
#if 0
void * my_memcpy(void * des,const void * src,size_t n)
{
	void * p = des;
	assert(des && src);
	while(n--)
	{
        *(char *)des = *(char *)src;
		++(char *)des;
		++(char *)src;
	}
	return p;
}
int main()
{
	char str[] = "gshgduuihfuguihub";
	const char * p = "sdyupwt";
	/*int arr[10] = {1,2,3,4,5,6,7,8,9};
	int arr1[10] = {8,8,8};*/
	int n = 12;
	my_memcpy(str,p,n);
	/*my_memcpy(arr,arr1,n);*/
	printf("%s\n",arr);
	return 0;
}
#endif

/* 7.实现memmove */
void * my_memmove(void * des,const void * src,size_t count)
{
	void * p = des;
	assert(des && src);
	if(des <= src)
	{
		while(count--)
		{
			*(char*)des = *(char*)src;
			++(char*)des;
			++(char*)src;
		}
	}
	else
	{
		while(count--)
		{
			*((char*)des+count) = *((char*)src+count);
		}
	}
	return p;
}
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int n = 16;
	int i = 0;
	my_memmove(arr+4,arr+2,n);
	for(i = 0;i < 10;i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
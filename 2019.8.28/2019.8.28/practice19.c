#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
/* 1.模拟实现strncpy */
#if 0
char * my_strncpy(char * str1,const char * str2,int count)
{
	char * p = str1;
	assert(str1 && str2);
	while(count--)
	{
		*str1++ = *str2++;
	}
	return p;
}
int main()
{
	char str[] = "afgdfsfg";
	char * p = "bitdgfy";
	int n = 3;
	my_strncpy(str,p,n);
	printf("%s\n",str);
	return 0;
}
#endif

/* 2.模拟实现strncat */
#if 1
char * my_strncat(char * str1,const char * str2,int count)
{
	char * p = str1;
	assert(str1 && str2);
	while(*str1)
	{
		str1++;
	}
	while(count--)
	{
		*str1++ = *str2++;
	}
	*(str1) = '\0';
	return p;
}
int main()
{
	char str[20] = "sgdsghfdfy";
	char * p = "bitduwg";
	int n = 3;
	my_strncat(str,p,n);
	printf("%s\n",str);
	return 0;
}
#endif

/* 3.模拟实现strncmp */
#if 0
int my_strncmp(const char * str1,const char * str2,int count)
{
	assert(str1 && str2);
	while(count && *str1 == *str2)
	{	
			str1++;
			str2++;
			count--;
	}
	if(count == 0)
		return 0;
	else
		return *str1 - *str2;
}

int main()
{
	const char *str1 = "abcaui";
	const char *str2 = "abcef";
	int n = 4;
	int ret = my_strncmp(str1,str2,n);
	if(ret > 0)
	{
		printf("str1>str2\n");
	}
	else if(ret < 0)
	{
		printf("str1<str2\n");
	}
	else
	{
		printf("str1=str2\n");
	}
	return 0;
}
#endif
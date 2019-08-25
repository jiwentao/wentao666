#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/* 1.一个数组中只有两个数字是出现一次， 
     其他所有数字都出现了两次。 
     找出这两个数字，编程实现。*/
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
			printf("%d只出现了一次\n",arr[i]);
		}
	}
	return 0;
}
#endif

/* 2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水， 
     给20元，可以喝多少汽水。*/
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
	printf("可以喝%d瓶汽水\n",ret);
	return 0;
}
#endif

/* 3.模拟实现strcpy */
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

/* 4.模拟实现strcat */
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
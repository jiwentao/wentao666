#include<stdio.h>
/*1. 打印100~200之间的素数 */
/*
int main()
{
	int i;
	int j;
	for(i = 100; i <= 200; i++)
	{
		for(j = 2; j < i; j++)
		{
			if(i % j == 0)
				break;
		}
		if(j == i)
			printf("%d是素数 ",i);	
	}
	getchar();
	return 0;
}*/

/*2. 输出乘法口诀表*/
/*
int main()
{
	int i,j,k = 0;
	for(i = 1; i <= 9; i++)
	{
		for(j = 1; j <= i; j++)
		{
			k = i * j;
			printf("%d * %d = %d ",i,j,k);
		}
		printf("\n");
	}
	getchar();
	return 0;
}*/

/*3. 判断1000年---2000年之间的闰年 */
int main()
{
	int year;
	for(year = 1000; year <= 2000; year++)
	{
		if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			printf("%d是闰年\n",year);
	}
	return 0;
}
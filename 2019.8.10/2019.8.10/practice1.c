#include<stdio.h>
/*1. ��ӡ100~200֮������� */
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
			printf("%d������ ",i);	
	}
	getchar();
	return 0;
}*/

/*2. ����˷��ھ���*/
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

/*3. �ж�1000��---2000��֮������� */
int main()
{
	int year;
	for(year = 1000; year <= 2000; year++)
	{
		if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			printf("%d������\n",year);
	}
	return 0;
}
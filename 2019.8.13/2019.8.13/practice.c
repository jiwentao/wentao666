#include<stdio.h>
/*1.����Ļ���������ͼ��*/
#if 0
int main()
{
	int n = 0,i = 0,j = 0,k = 0;
	for(n = 1; n <= 7; n++)
	{
		for(i = 0; i <= (7-n); i++)
		{ 
		    printf(" ");
	    }
		for(j = 1; j <= (2*n-1); j++)
		{
			printf("*");
		}
		printf("\n");
	}

	n--;

	for(k = 6; k >= 1; k--)
	{
		for(i = 0; i <= (n-k); i++)
		{
			printf(" ");
		}
		for(j = 1; j <= (2*k-1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
#endif

/*2.���0��999֮������С�ˮ�ɻ������������*/
#if 0
int main()
{
	int n = 0;
	int a,b,c;
	for(n = 100; n <= 999; n++)
	{
		a = n % 10;
		b = (n / 10) % 10;
		c = n / 100;
		if(c*100 + b*10 + a == a*a*a + b*b*b + c*c*c)
		{
			printf("%d��ˮ�ɻ���\n",n);
		}
	}
	return 0;
}
#endif

/*3.��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������*/
int main()
{
	int n = 0,i = 0;
	int Sn = 0,sum = 0;
	printf("�����������һλ��:>");
	scanf("%d",&n);
	for(i = 1; i <= 5; i++)
	{
		Sn = n + Sn*10;
		sum += Sn;
	}
	printf("%d\n",sum);
	return 0;
}
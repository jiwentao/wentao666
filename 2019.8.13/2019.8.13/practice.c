#include<stdio.h>
/*1.在屏幕上输出菱形图案*/
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

/*2.求出0～999之间的所有“水仙花数”并输出。*/
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
			printf("%d是水仙花数\n",n);
		}
	}
	return 0;
}
#endif

/*3.求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字*/
int main()
{
	int n = 0,i = 0;
	int Sn = 0,sum = 0;
	printf("请输入任意的一位数:>");
	scanf("%d",&n);
	for(i = 1; i <= 5; i++)
	{
		Sn = n + Sn*10;
		sum += Sn;
	}
	printf("%d\n",sum);
	return 0;
}
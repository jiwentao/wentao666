#include<stdio.h>
/*1. ������A�е����ݺ�����B�е����ݽ��н�����������һ����*/
#if 0
int main()
{
	int arr1[5] = {1,2,3,4,5};
	int arr2[5] = {6,7,8,9,10};
	int arr3[5] = {0};
	int i;
	for(i = 0; i < 5; i++)
	{
		arr3[i] = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = arr3[i];
	}
	for(i = 0; i < 5; i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n");
	for(i = 0; i < 5; i++)
	{
		printf("%d ",arr2[i]);
	}
	getchar();
	return 0;
}
#endif 

/*2. ����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ��*/
#if 0
int main()
{
	int n = 1,t = -1;
	double sum = 1.0;
	for(n = 1; n < 100; n++)
	{
		sum = sum + t * 1/(double)(n+1);
		t = -t;
	}
	printf("%f\n",sum);
	getchar();
	return 0;
}
#endif

/*3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��*/
int main()
{
	int n = 0;
	int i;
	for(i = 1; i < 100; i++)
	{
		if(i % 10 == 9)
			n++;
	}
	printf("%d\n",n);
	getchar();
	return 0;
}
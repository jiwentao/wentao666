#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*1.��������ʹ����ȫ����λ��ż��ǰ�档 
    ��Ŀ�� 
         ����һ���������飬ʵ��һ�������� 
         �����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣� 
         ����ż��λ������ĺ�벿�֡� */
#if 0 
void Adjust_arr(int * p,int n)
{
	int i = 0,j = 0;
	int tem = 0;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n-1-i; j++)
		{
			if(p[j] % 2 != 0 && p[j+1] % 2 == 0)
			{
				tem = p[j];
				p[j] = p[j+1];
				p[j+1] = tem;
			}
		}
	}
	for(i = 0; i < n; i++)
	{
		printf("%d ",p[i]);
	}
	printf("\n");
}
int main()
{
	int arr[10] = {1,3,8,4,5,7,6,2,10,9};
	Adjust_arr(arr,10);
	return 0;
}
#endif
/*2. 
//���Ͼ��� 
��һ����ά����. 
�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����. 
�������������в���һ�������Ƿ���ڡ� 
ʱ�临�Ӷ�С��O(N);  */
int main()
{
	int arr[3][3] = {{1,3,4},{5,7,9},{12,30,49}};
	int i = 0, j = 2;
	int k = 49;
	while(i >= 0 && i < 3 && j >= 0 && j < 3)
	{
		if(k == arr[i][j])
			break;
		else if(k > arr[i][j])
			i++;
		else
			j--;
	}
	if(i >= 3 || j >= 3)
	{
		printf("�����в����ڸ�����\n");
	}
	else
	{
		printf("kΪ�����е�%d�У���%d��Ԫ��\n",i+1,j+1);
	}
	return 0;
}
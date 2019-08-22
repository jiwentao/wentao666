#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*1.调整数组使奇数全部都位于偶数前面。 
    题目： 
         输入一个整数数组，实现一个函数， 
         来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分， 
         所有偶数位于数组的后半部分。 */
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
//杨氏矩阵 
有一个二维数组. 
数组的每行从左到右是递增的，每列从上到下是递增的. 
在这样的数组中查找一个数字是否存在。 
时间复杂度小于O(N);  */
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
		printf("数组中不存在该数字\n");
	}
	else
	{
		printf("k为数组中第%d行，第%d列元素\n",i+1,j+1);
	}
	return 0;
}
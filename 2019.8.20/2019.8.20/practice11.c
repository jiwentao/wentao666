#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/* 1.5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果 
       A选手说：B第二，我第三； 
       B选手说：我第二，E第四； 
       C选手说：我第一，D第二； 
       D选手说：C最后，我第三； 
       E选手说：我第四，A第一； 
 比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。 */
#if 0
int main()
{
	int a,b,c,d,e;
	for(a = 1; a <= 5; a++)
		for(b = 1; b <= 5; b++)
			for(c = 1; c <= 5; c++)
				for(d = 1; d <= 5; d++)
					for(e = 1; e <= 5; e++)
					{
						if((2 == b && a != 3)||(b != 2 && a == 3))
						{
							if((2 == b && e != 4)||(b != 2 && e == 4))
							{
								if((1 == c && d != 2)||(c != 1 && d == 2))
								{
									if((5 == c && d != 3)||(c != 5 && d == 3))
									{
										if((4 == e && a != 1)||(e != 4 && a == 1))
										{
											if(120 == a*b*c*d*e)
											{
												printf("a = %d,b = %d,c = %d,d = %d,e = %d\n",a,b,c,d,e);
											}
										}
									}
								}
							}
						}

					}
				return 0;
}
#endif
/* 2. 日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个 
      嫌疑犯的一个。以下为4个嫌疑犯的供词。 
      A说：不是我。 
      B说：是C。 
      C说：是D。 
      D说：C在胡说 
      已知3个人说了真话，1个人说的是假话。 
      现在请根据这些信息，写一个程序来确定到底谁是凶手。 
*/
#if 0
int main()
{
	int a,b,c,d;
	printf("0代表不是凶手，1代表凶手:\n");
	for(a = 0; a < 2; a++)
		for(b = 0; b < 2; b++)
			for(c = 0; c < 2; c++)
				for(d = 0; d < 2; d++)
				{
					if(((c == 1)&&(d == 1)&&(d == 0))==1 || ((a == 0)&&(d == 1)&&(d == 0))==1
					 ||((a == 0)&&(c == 1)&&(d == 0))==1 || ((a == 0)&&(c == 1)&&(d == 1))==1)
					{
						if((a+b+c+d) == 1)
						{
							printf("a = %d,b = %d,c = %d,d = %d\n",a,b,c,d);
						}
					}
				}
			return 0;
}
#endif
/* 
3.在屏幕上打印杨辉三角。 
1 
1 1 
1 2 1 
1 3 3 1 
*/
int main()
{
	int i = 0,j = 0;
	int row = 0;
	int arr[20][20] = {0};
	printf("请输入杨辉三角的行数:>");
	scanf("%d",&row);
	for(i = 0; i < row; i++)
	{
		arr[i][0] = 1;
		arr[i][i] = 1;
		for(j = 1; j < i; j++)
		{
			arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
		}
	}
	for(i = 0; i < row; i++)
	{	for(j = 0; j <= i; j++)
		{
			printf("%d ",arr[i][j]);
		}
	    printf("\n");
	}
	return 0;
}
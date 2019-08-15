#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*1.完成猜数字游戏。*/
#if 0
#include<stdlib.h>
void menu()
{
	printf("*******************************\n");
	printf("***********  1.play  **********\n");
	printf("***********  0.exit  **********\n");
	printf("*******************************\n");
}
void game()
{
	int random_num = rand() % 100 + 1;
	int input = 0;
	while(1)
	{
		printf("请输入猜的数字:>");
		scanf("%d",&input);
		if(input > random_num)
		{
			printf("猜大了\n");
		}
		else if(input < random_num)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新选择:>");
			break;
		}
	}while(input);
	return 0;
}
#endif

/*2.写代码可以在整型有序数组中查找想要的数字， 
找到了返回下标，找不到返回-1.（折半查找） */
#if 0
int bin_search(int * p,int k,int sz)
{
	int left = 0,mid = 0;
	int right = sz - 1;
	while(left <= right)
	{
		mid = left + (right - left) / 2;
		if(p[mid] > k)
		{
			right = mid - 1;
		}
		else if(p[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int ret = bin_search(arr,18,sz);
	if( -1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了,下标为%d\n",ret);
	}
	return 0;
}
#endif

/*3.编写代码模拟三次密码输入的场景。 
最多能输入三次密码，密码正确，提示“登录成功”,密码错误， 
可以重新输入，最多输入三次。三次均错，则提示退出程序。*/
#if 0
#include <string.h>
int main()
{
	char password[20] = {0};
	int i;
	for(i = 0; i < 3; i++)
	{
		printf("请输入你的密码:>");
	    scanf("%s",password);
		if(strcmp(password,"123456") == 0)
		{
			printf("等录成功\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入\n");
		}
	}
	if(i == 3)
	{
		printf("三次密码均输入错误，退出程序\n");
	}

	return 0;
}
#endif

/*4.编写一个程序，可以一直接收键盘字符， 
如果是小写字符就输出对应的大写字符， 
如果接收的是大写字符，就输出对应的小写字符， 
如果是数字不输出。 */
int main()
{
	char ch = 0;
	
	while((ch = getchar()) != EOF)
	{
	    if(ch >= 'A' && ch <= 'Z')
		{
			printf("该字符对应的小写字母为%c\n",ch+32);
		}
		else if(ch >= 'a' && ch <= 'z')
		{
			printf("该字符对应的大写字母为%c\n",ch-32);
		}
		else 
			;
	}
	return 0;
}
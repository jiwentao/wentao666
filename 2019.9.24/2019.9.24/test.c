#define _CRT_SECURE_NO_WARNINGS
/* 进度条的实现 */
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	int i = 0;
	char bar[102];
	const char * lable ="|/-\\"; 
	memset(bar,0,sizeof(bar));
	for(i = 0; i <= 100; )
	{
		printf("[%-100s][%d%%][%c]\r",bar,i,lable[i%4]);
		//fflush(stdout);
		Sleep(1000);
		bar[i++] = '#';
	}
	printf("\n");
	return 0;
}

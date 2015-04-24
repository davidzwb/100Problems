//编写一个函数，从传入的num个字符串中找出一个最长的一个字符串，并通过形参指针max传回该串地址(用****作为结束输入的标志)。
#include <stdio.h>
#include <string.h>

int n = 0;
void fun(char *a[], char *max)
{
	char str[256];
	printf("start inputing strings, input **** to terminate\n");
	while(10)
	{
		scanf("%s", str);
		if(!strcmp(str, "****"))
			break;
		else
		{
			if(strlen(str) > n)
				max = str;
		}
	}
}

int main(int argc, char const *argv[])
{
	char str[256];
	printf("start inputing strings, input **** to terminate\n");
	while(10)
	{
		scanf("%s", str);
		fun()
	}
	printf("the longest one is:%s\n", fun());	
	return 0;
}
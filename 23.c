//请编写函数fun，该函数的功能是：判断字符串是否为回文?若是则函数返回1，主函数中输出yes，否则返回0，主函数中输出no。回文是指顺读和倒读都是一样的字符串。
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fun(char *str)//create a string 'temp' with reverse order, then compare the 2 string;
{
	int n = strlen(str), i = 0;
	int m = n;
	char *temp = (char *)malloc(n + 1);
	temp[n--] = '\0';
	for(n; n >= 0; n--)
	{
		temp[n] = str[i++];
	}
	if(strcmp(str, temp) == 0)
	{
		printf("yes\n");
		return 1;
	}
	else
	{
		printf("no\n");
		return 0;
	}
}

int main(int argc, char const *argv[])
{
	char str[10];
	printf("input a string\n");
	scanf("%s", str);
	fun(str);
	return 0;
}

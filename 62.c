//请编写函数fun，该函数的功能是：统一一含字符串中单词的个数，作为函数值返回。一行字符串在主函数中输入，规定所有单词由小写字母组成，单词之间由若干个空格格开，一行的开始没有空格。 
#include <stdio.h>

int fun(char *s)
{
	int space = 0;
	while(*s)
	{
		printf("%c", *s);
		if(*s == 32) //is space charater.
			space++;
		s++;
	}
	return space + 1;
}

int main(int argc, char const *argv[])
{
	char str[256];
	//printf("input a string\n");
	//scanf("%s ", str);
	gets(str);
	printf("word count:%d\n", fun(str));
	return 0;
}
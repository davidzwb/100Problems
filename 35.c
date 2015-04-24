//请编写一个函数，用来删除字符串中的所有空格。
#include <stdio.h>

void fun(char *str)
{
	char *p;
	while(*str)
	{
		p = str;
		if(*str == 32)
		{
			while(*(p + 1))
			{
				*p = *(p + 1);
				++p;
			}
			*p = '\0';
		}
		++str;
	}
}

int main(int argc, char const *argv[])
{
	char str[256];
	printf("input a string\n");
	gets(str); //the `gets' function is dangerous and should not be used.
	fun(str);
	printf("%s\n", str);
	return 0;
}
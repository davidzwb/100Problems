//编写函数fun,该函数的功能是：从字符中删除指定的字符，同一字母的大、小写按不同字符处理。

#include <stdio.h>

void fun(char *s, char c)
{
	char *p;
	while(*s)
	{
		if(*s == c)
		{
			p = s;
			while(*(p + 1))
			{
				*p = *(p + 1);
				p++;
			}
			*p = '\0';
		}
		s++;
	}
}

int main(int argc, char const *argv[])
{
	char str[256];
	char c;
	printf("input a string\n");
	scanf("%s", str);
	getchar();
	printf("input a character\n");
	scanf("%c", &c);
	fun(str, c);
	printf("the result is: %s\n", str);
	return 0;
}
//假定输入的字符串中只包含字母和*号，请编写函数fun，它的功能是：除了字符串前导和尾部的*号之外，将串中其他*号全部删除。形参h已指向字符串第一个字符，形参p已指向字符串中最后一个字母。在编写程序时，不得使用c语言提供的字符串函数。 

#include <stdio.h>

void fun(char *s, char *h, char *p)
{
	char *q;
	while(*(p--) == 42);
	//printf("p:%c\n", *p);
	while(*(h++) == 42);
	s = h;
	while(s != p)
	{
		//printf("%c, %c\n", *s, *p);
		q = s;
		if(*s == 42)
		{
			while(*(q + 1))
			{
				*q = *(q + 1);
				q++;
			}
			*q = '\0';
			p--;
		}
		else
			s++;
	}
}

int main(int argc, char const *argv[])
{
	char *p;
	char str[256];
	printf("input a string\n");
	scanf("%s", str);
	p = str;
	while(*(p + 1))
		p++;
	//printf("p:%c\n", *p);
	fun(str, str, p);
	printf("%s\n", str);
	return 0;
}
//假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：除了尾部的*号之外，将字母串中其他*号全部删除。形参p已指向字符串中最后的一个字母。不使用c的字符串函数。
#include <stdio.h>

void fun(char *s, char *p)
{
	char *q;
	while(*(p--) == 42);
	//printf("p:%c\n", *p);
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
	fun(str, p);
	printf("%s\n", str);
	return 0;
}
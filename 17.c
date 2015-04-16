#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//请编写一个函数fun(char *s)，该函数的功能使把字符串中的内容逆置。

char * fun(char *s)
{	
	int n = strlen(s);
	char *p = (char *)malloc(n + 1);
	p[n--] = '\0';
	while(*s)
	{
		p[n--] = *(s++);
	}
	return p;
}

int main(int argc, char const *argv[])
{
	char str[27];
	printf("input a string\n");
	scanf("%s", str);
	printf("%s\n", fun(str));
	return 0;
}
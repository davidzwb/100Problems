//编写一个函数，该函数可以统计一个长度为2的字符串在另一个字符串中出现的次数。 
#include <stdio.h>

int fun(char *str, char *u)
{
	int count = 0;
	while (*str)
	{
		if (*str == *u && *(str+1) == *(u+1))
		{
			++count;
		}
		str++;
	}
	return count;
}

int main(int argc, char const *argv[])
{
	char str[256];
	char c[2];
	printf("input a string\n");
	scanf("%s", str);
	getchar();
	printf("input a string\n");
	scanf("%s", c);
	printf("there're %d occurrence(s) of %s.\n", fun(str, c), c);
	return 0;
}

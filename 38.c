//请编写函数fun，它的功能是：求出ss所指字符串中指定字符的个数，并返回此值。
#include <stdio.h>

int fun(char *ss, char c)
{
	int count = 0;
	while(*ss)
	{
		if(*ss == c)
			++count;
		ss++;
	}
	return count;
}

int main(int argc, char const *argv[])
{
	char str[256] = {'\0'};
	char ca;
	printf("input a string\n");
	scanf("%s", str);
	getchar();
	printf("input a character\n");
	scanf("%c", &ca);
	printf("there're %d %c.\n", fun(str, ca), ca);
	return 0;
}
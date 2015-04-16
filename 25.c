//请编写一个函数fun，它的功能是：比较两个字符串的长度，(不得调用c语言提供的求字符串长度的函数)，函数返回较长的字符串。若两个字符串长度相同，则返回第一个字符串。

#include <stdio.h>

char *fun(char *a, char *b)
{
	int na, nb;
	for(na = 0; a[na] != '\0'; na++);
	for(nb = 0; b[nb] != '\0'; nb++);
	if(na == nb)
		return a;
	else if (na < nb)
			return b;
		else
			return a;
}

int main(int argc, char const *argv[])
{
	char astr[10];
	char bstr[10];
	printf("input string a\n");
	scanf("%s", astr);
	printf("input string b\n");
	scanf("%s", bstr);
	printf("the longer one is: %s\n", fun(astr, bstr));
	return 0;
}
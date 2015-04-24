//假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：使字符串中尾部的*号不得多于n个；若多于n个，则删除多于的*号；若少于或等于n个，则什么也不做，字符串中间和前面的*号不删除。
#include <stdio.h>
#include <string.h>

void fun(char *str, int n)
{
	int count = 0;
	int len = strlen(str);
	int i = len - 1;
	while(str[i] == 42)
	{
		if(++count > n)
		{
			str[--len] = '\0';
		}
		--i;
	}
}

int main(int argc, char const *argv[])
{
	int num;
	char str[10];
	printf("input a string\n");
	scanf("%s", str);
	printf("input a limit\n");
	scanf("%d", &num);
	fun(str, num);
	printf("%s\n", str);
	return 0;
}
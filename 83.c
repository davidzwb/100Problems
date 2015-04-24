//第83题 假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能使：将字符串尾部的*号全部删除，前面和中间的*号不删除。

#include <stdio.h>
#include <string.h>

void fun(char *str, int n)
{
	int len = strlen(str);
	int i = len - 1;
	while(str[i--] == 42);
	str[i + 1] = '\0';
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
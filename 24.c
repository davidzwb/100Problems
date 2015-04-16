//请编写一个函数fun，它的功能是：将一个字符串转换为一个整数(不得调用c语言提供的将字符串转换为整数的函数)。
#include <stdio.h>
#include <string.h>

int power(int n, int exp)
{
	int i, sum = 1;
	for(i = 0; i < exp; i++)
	{
		sum *= n;
	}
	return sum;
}

int fun(char *str)
{
	int j = strlen(str);
	int i = 0, sum = 0;
	for(i = 0; str[i] != '\0'; i++)
	{
		sum += (str[i] - 48) * (power(10, j - 1));
		j--;
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	char str[10];
	printf("input a string of numbers\n");
	scanf("%s", str);
	printf("%d\n", fun(str));
	return 0;
}
//请编写一个函数fun，其功能是：将两个两位数的正整数ab合并形成一个整数放在c中。合并方式是：将a数的十位和个位数依次放在c数的个位和百位上，b数的十位和个位数依次放在c数的十位和千位上。

#include <stdio.h>

int fun(int a, int b)
{
return a / 10 * + a % 10 * 100 + b / 10 * 10 + b % 1000;
}

int main(int argc, char const *argv[])
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", fun(a, b));
	return 0;
}
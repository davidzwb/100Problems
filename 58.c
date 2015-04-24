//编写函数藏服那，它的功能是：求n以内(不包括n)同时能被3与7整除的所有自然数之和的平方根s，并作为函数值返回。
#include <math.h>
#include <stdio.h>

float fun(int n)
{
	int i, sum = 0;
	for(i = 0; i < n; i++)
	{
		if(i % 3 == 0 && i % 7 == 0)
			sum += i;
	}
	return sqrt(sum);
}

int main(int argc, char const *argv[])
{
	int num;
	scanf("%d",&num);
	printf("%f\n", fun(num));
	return 0;
}
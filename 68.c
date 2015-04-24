//请编写函数fun，其功能时：计算并输出下列多项式的值：sn=1+1/1!+1/2!+1/3!+1/4!+…+1/n!
#include <stdio.h>

int factorial(int n)
{
	int i = 1, sum = 0;
	if(0 == n)
		return 1;
	for(i; i <= n; i++)
		 sum += i;
	return sum;
}

float fun(int n)
{
	int i;
	float sum = 0.0;
	for(i = 0; i <= n; i++)
		sum += (1.0 / factorial(i));
	return sum;
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	printf("%f\n", fun(n));
	return 0;
}
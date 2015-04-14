#include <stdio.h>

//编写函数fun,功能是：根据以下攻势计算s,计算结果作为函数值返回；n通过形参传入。S=1+1/(1+2)+1/(1+2+3)+…….+1/(1+2+3+4+……+n) 

int factorial(int n)
{
	int i = 1, sum = 0;
	for(i; i <= n; i++)
		 sum += i;
	return sum;
}

float fun(int n)
{
	int i = 2;
	float S = 2;
	for(i; i <= n; i++)
		S = (float)S / (factorial(i) + 1);
	return S;
}

int main(void)
{
	int num = 0;
	printf("a number:\n");
	scanf("%d",&num);
	printf("%f\n", fun(num));
	
	return 0;
}
	

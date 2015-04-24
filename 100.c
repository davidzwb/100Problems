//请编写函数fun，其功能是：计算并输出 s=1+(1+2(0.5))+(1+2(0.5)+3(0.5))+…+(1+2(0.5)+3(0.5)+…+n(0.5)) 

float factorial(int n)
{
	int i = 2;
	float sum = 0.0;
	for(i; i <= n; i++)
		 sum += i * 0.5;
	return sum;
}

float fun(int n)
{
	int i = 2;
	float S = 0.0;
	for(i; i <= n; i++)
		S += (factorial(i) + 1);
	return S;
}

int main(void)
{
	int num = 0;
	scanf("%d", &num)
	printf("%f\n", fun(num));
	return 0;
}
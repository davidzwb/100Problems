//请编写函数fun，其功能是：计算并输出下列多项式值：s=1+1/(1+2)+1/(1+2+3)+..1/(1+2+3…+50)

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
	printf("%f\n", fun(50));
	return 0;
}
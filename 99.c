//请编写函数fun ，其功能是：计算并输出3到n之间所有素数的平方根之和。

int isPrime(int num)
{
	int i = 2;
	for(i; i < num; i++)
	{
		if(num % i == 0)
			return 0;
	}
	return 1;
}

float fun(int n)
{
	float sum = 0.0;
	for (int i = 3; i <= n; ++i)
	{
		if(isPrime(i))
			sum += sqrt(i);
	}
	return sum;
}
//请编写函数fun，其功能是：将所有大于1小于整数m的非素数存入xx所指的数组中，非素数的个数通过k传回。

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

int fun(int m, int xx[])
{
	int i, j = 0, count = 0;
	for(i = 2; i < m; i++)
	{
		if(!isPrime(i))
		{
			kk[j++] = i;
			++count;
		}
	}
	return count;
}
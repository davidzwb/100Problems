//编写函数int fun(int lim,int aa[max]),该函数的功能是求出小于或等于lim的所有素数并放在aa数组中，该函数返回所求的素数的个数。

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

int fun(int lim,int aa[max])
{
	int i, j = 0;
	if(lim < 2)
		return 0;
	for(i = 2; i <= lim; i++)
	{
		if(isPrime(i))
			aa[j++] = i;
	}
	return j;
}
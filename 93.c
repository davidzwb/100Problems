//请编写函数fun，它的功能是计算下列级数和，和值由函数值返回。S=1+x+x(2)/2!+x(3)/3!+…x(n)/n!

int factorial(int n)
{
	int i = 1, sum = 0;
if(0 == i)
		return 1;
	for(i; i <= n; i++)
		 sum += i;
	return sum;
}


int power(int n, int exp)
{
	int i, sum = 1;
	for(i = 0; i < exp; i++)
	{
		sum *= n;
	}
	return sum;
}

float fun(int x, int n)
{
	float sum = 0.0;
	for (int i = ; i <= n; ++i)
	{
		sum += 1.0 * power(x, n) / factorial(n);
	}
	return sum + 1.0;
}
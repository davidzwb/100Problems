//请编写函数fun，它的功能是：计算并输出n(包括n)以内能被5或9整除的所有自然数的倒数之和。

float fun(int n)
{
	float sum = 0.0;
	for (int i = 0; i <= n; ++i)
	{
		if (i % 5 == 0 || i % 9 == 0)
			sum += 1.0 / i;
	}
	return sum;
}
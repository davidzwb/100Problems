//请编写一个函数fun，它的功能是：计算并输出给定整数n的所有因子(不包括1与自身)之和。规定n的值不大于1000。

int fun(int n)
{
	int sum = 0;
	for (int i = 2; i < n; ++i)
	{
		for (int j = 2; j < n; ++j)
		{
			if(i * j == n)
			{
				sum += i;
				sum += j;
			}
		}
	}
	return sum / 2;
}
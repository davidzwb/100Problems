//请编写函数fun，其功能是：计算并输出下列多项式值:sn=(1-1/2)+(1/3-1/4)+…+(1/(2n-1)-1/2n). 

float fun(int n)
{
	float sum = 0.0;
	for (int i = 1; i <= 2 * n; ++i)
	{
		if( i % 2 == 0)
			sum -= 1.0 / n;
		else
			sum += 1.0 / n;
	}
	return sum;
}
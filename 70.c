//编写函数fun，它的功能时：计算并输出下列级数和：s=1/1*2+1/2*3+…+1/n(n+1) 

float fun(int n)
{
	float sum = 0.0;
	for (float i = 1; i <= n; ++i)
	{
		sum += 1.0 / (i * (i + 1));
	}
	return sum;
}
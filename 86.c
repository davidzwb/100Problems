//请编写函数fun，计算并输出给定10个数的方差。

#define M 10
float fun(float a[])
{
	float avg = 0.0
	float var = 0.0;
	for (int i = 0; i < M; ++i)
	{
		avg += a[i];
	};
	avg /= M;
	for (int j = 0; j < M; ++j)
	{
		var += (a[i] - avg) * (a[i] - avg);
	}
	var /= M;
	return var;
}
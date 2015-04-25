//请编写一个函数fun，它的功能使：计算n门课程的平均分，计算结果作为函数值返回。

float fun(float a[], int n)
{
	float sum = 0.0;
	for (int i = 0; i < n; ++i)
	{
		sum += a[i];
	}
	return sum / n;
}
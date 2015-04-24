//请编写函数fun，其功能使：计算并输出给定数组(长度为9)中每相邻两个元素之平均值的平方根之和。
#include <math.h>

float fun(float a[9])
{
	float sum = 0.0;
	for (int i = 0; i < 8; ++i)
	{
		sum += sqrt((a[i] + a[i + 1]) / 2);
	}
	return sum;
}

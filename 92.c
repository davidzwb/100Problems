//请编写函数fun，它的功能是计算：s=(ln(1)+ln(2)+ln(3)+…+ln(m))(0.5),s作为函数值返回。
#include <math.h>

float fun(int m)
{
	float sum = 0.0;
	for (int i = 1; i <= m; ++i)
	{
		sum += (float)log((double)m);
	}
	return sum * 0.5
}
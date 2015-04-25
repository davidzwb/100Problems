//请编写一个函数fun，它的功能是：根据以下公式求x的值(要求满足精度0.0005，即某项小于0.0005时停止迭代)：
//x/2=1+1/3+1×2/3×5+1×2×3/3×5×7+1×2×3×4/3×5×7×9+…+1×2×3×…×n/3×5×7×(2n+1)
//程序运行后，如果输入精度0.0005，则程序输出为3.14…。
#include <stdio.h>

void factor(int n, int *nu, int *de)
{
	for (int i = 1; i <= n; ++i)
	{
		*nu *= i;
		printf("nu:%d\n", *nu);
	}
	for (int j = 3; j <= (2 * n) + 1; ++j)
	{
		if(j % 2 != 0)
		{
			*de *= j;
			printf("de:%d\n", *de);
		}
	}
}

double fun(int n)
{
	int nu = 1; //numerator
	int de = 1; //denominator
	double sum = 0.0;
	for (int i = 1; i <= n; ++i)
	{
		nu = 1;
		de = 1;
		factor(i, &nu, &de);
		sum += ((1.0 * nu) / (1.0 * de));
		printf("sum:%f\n", sum);
		if(sum < 0.0005)
			break;
	}
	return sum + 1;
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	printf("%f\n", fun(n) / 2);
	return 0;
}
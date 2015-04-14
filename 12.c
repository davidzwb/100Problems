#include <stdio.h>

//下列程序定义了n×n的二维数组，并在主函数中赋值。请编写函数fun,函数的功能使求出数组周边元素的平均值并作为函数值返回给主函数中的s。

float fun(int matrix[][2], int n)
{
	int sum = 0, i = 0, k = 0;
	for(i = 0; i < n; i++)
	{
		printf("i=%d\n", i);
		for(k = 0; k < n; k++)
		{
				sum += matrix[i][k];
				printf("i=%d,k=%d,sum=%d\n", i, k, sum);
		}
	}
	return (float)sum / (n * n);
}

int main(void)
{
	int matrix[2][2] = {{1, 2}, {3, 4}};
	printf("%f\n", fun(matrix, 2));
	return 0;
}

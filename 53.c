//请编写函数fun,该函数的功能是：实现b=a+a，即把矩阵a加上a的转置，存放在矩阵b中。计算结果在main函数中输出。
#include <stdio.h>
#define N 3

int (*matrix_add)[N][N](int a[N][N], int b[N][N])
{
	int m[N][N];
	int i, j;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
			m[i][j] = a[i][j] + b[i][j];
	}
}

int (*transpose)[N][N](int a[N][N])
{
	int m[N][N], i, j;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			m[j][i] = a[i][j];
		}
	}
	return m;
}

int (*fun)[N][N](int a[N][N])
{
	int p[N][N];
	p = matrix_add(a, transpose(a));
	return p;
}

int main(int argc, char const *argv[])
{
	int *p, i, j;
	int a[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	p = fun(a);
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
			printf("%d ", p[i][j]);
		putchar('\n');
	}
	return 0;
}
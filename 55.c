//请编写函数fun，该函数的功能是：将m行n列的二维数组中的数据，按行的顺序依次放到一维数组中，一维数组中数据的个数存放在形参n所指的储存单元中。

void fun(int a[M][N], int b[M * N], int *n)
{
	int i, j, k = 0;
	for(i = 0; i < M; i++)
	{
		for(j = 0; j < N; j++)
			b[k++] = a[i][j];
	}
	*n = k; 
}
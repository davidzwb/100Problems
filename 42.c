//下列程序定义了n×n的二维数组，并在主函数中自动赋值。请编写函数fun(int a[][n],int n),该函数的功能是：将数组右上半三角元素中的值乘以m。

#define M 3

void fun(int a[][n], int n)
{
	int i, j;
	for(i = 0; i<n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(i <= j)//右上角的元素。
			{
				a[i][j] *= M;
			}
		}
	}
}
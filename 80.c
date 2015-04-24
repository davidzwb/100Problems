//程序定义了n×n的二维数组，并在主函数中自动赋值。请编写函数fun,该函数的功能是：使数组左下半三角元素中的值乘以n。

void fun(int a[][], int n)
{
	int i = 0, m = 0;
		for(i; i <= n; i++)
		{
			for(m; m <=n; m++)
			{
				if(i < m)
					a[i][m] *= n;
			}
		}
}
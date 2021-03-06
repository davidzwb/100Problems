#include <stdio.h>
//请编写一个函数void fun(int tt[m][n],int pp[n]),tt指向一个m行n列的二维函数组，求出二维函数组每列中最小元素，并依次放入pp所指定一维数组中。二维数组中的数已在主函数中赋予。
#define M 3
#define N 2
#define Infinity 2147483647

void fun(int tt[M][N], int pp[N])
{
	int mi, ni, min = Infinity;
	for(ni = 0; ni < N; ni++)
	{
		for(mi = 0; mi < M; mi++)
		{
			if(tt[mi][ni] < min)
				min = tt[mi][ni];
		}
		pp[ni] = min;
		min = Infinity;
	}
}

int main(void)
{
	int tt[M][N] = {{1, 2},{3, 4}, {5, 6}};
	int pp[N] = {0};
	int i;
	fun(tt, pp);
	for(i = 0; i < N; i++)
		printf("%d\n", pp[i]);
	return 0;
}

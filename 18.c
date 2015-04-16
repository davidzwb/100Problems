//编写程序，实现矩阵(3行3列)的转置(即行列互换)。

#include <stdio.h>

int *transpose(int A[3][3])
{
	int M[3][3], i, j;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			M[j][i] = A[i][j];
		}
	}
	return M;
}
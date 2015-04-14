#include <stdio.h>
#define N 4

int fun(int A[][N])
{
	int i = 0, j = 0, total = 0;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			if(i = 0 || i = N - 1 || j = 0 || j = N - 1)
				total += A[i][j];
		}
	}
	return total;
}

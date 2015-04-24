//请编写函数fun ，该函数的功能：将m行n列的二维数组中的数据，按列的顺学依次放到一维数组中。

#define M 4
#define N 2

void fun(char *s, char a[][2])
{
	int i, j;
	for(i = 0; i < N; i++)
	{
		for (j = 0; i < M; i++)
		{
		*(s++) = a[j][i];
		}
	}
}

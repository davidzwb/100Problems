//请编写一个函数fun，它的功能是：求除一个2×m整型二维数组中最大元素的值，并将此值返回调用函数。
#include <stdio.h>

int fun(int A[][2], int n)
{
	int i, j;
	int max = 0;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < 2; j++)
		{
			if(A[i][j] > max)
				max = A[i][j];
		}
	}
	return max;
}

int main(int argc, char const *argv[])
{
	int A[2][2] = {{1, 22}, {7, 48}};
	int n = sizeof(A) / sizeof(int) / 2;
	printf("%d\n", fun(A, n));
	return 0;
}
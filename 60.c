//请编写函数fun，该函数的功能是：删去一维数组中所有相同的数，使之只剩一个。数组中的数已按由小到大的顺序排列，函数返回删除后数组中数据的个数。
#include <stdio.h>

int fun(int a[], int n)
{
	int i, j, k, count = 0;
	for(i = 0; i < n; i++)
	{
		for(j = i + 1; j < n - count; j++)
		{	
			//printf("test2:i=%d,j=%d\n", i, j);
			if(a[j] == a[i])
			{
				//printf("test1:%d\n", a[j]);
				k = j;
				while(k < n - count)
				{
					a[k] = a[k + 1];
					k++;
				}
				count++;
			}
		}
	}
	return n - count;
}

int main(int argc, char const *argv[])
{
	int a[12] = {1, 2, 3, 4, 4, 5, 6, 7, 7, 8, 9, 10};
	int n = fun(a, sizeof(a) / sizeof(int));
	int i;
	for(i = 0; i < 10 ; i++)
		printf("%d\n", a[i]);
	return 0;
}
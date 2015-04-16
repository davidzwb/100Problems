//请编写一个函数fun,它的功能是：求出1到m之内(含m)能被7或11整除的所有整数放在数组a中，通过n返回这些数的个数。
#include <stdio.h>

int a[10] = {0};

int fun(int m, int a[])
{
	int i, j = 0;
	for(i = 1; i <= m; i++)
	{
		if(i % 7 == 0 || i % 11 == 0)
			a[j++] = i;
	}
	return j;
}

int main(int argc, char const *argv[])
{
	int num, i;
	printf("input a limit:\n");
	scanf("%d", &num);
	printf("%d\n", fun(num, a));
	/*for(i = 0; i <= 9; i++)
		printf("%d\n", a[i]);*/
	return 0;
}
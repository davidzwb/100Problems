//请编写一个函数fun，它的功能是：找出一维整型数组元素中最大的值和它所在的下标，最大的值和它所在的下标通过形参传回。数组元素中的值已在主函数中赋予。主函数中x是数组名，n 是x中的数据个数，max存放最大值，index存放最大值所在元素的下标。
#include <stdio.h>

void fun(int *x, int n, int *max, int *index)
{
	int t = n;
	*max = 0;
	while(n--)
	{
		if(*x > *max)
		{
			*max = *x;
			*index = t - n;
		}
		printf("text:%d\n", *x);
		x++;
	}
}

int main(void)
{
	int s[10] = {1,2,3,4,11,6,7,22,9,10};
	int m, k;
	fun(s, 10, &m, &k);
	printf("nth:%d\n", k);
	printf("num:%d\n", m);
	return 0;
}
//请编写函数fun，该函数的功能是：移动一维数组中的内容，若数组中由n个整数，要求把下标从0到p(p小于等于n－1)的数组元素平移到数组的最后。

#include <stdio.h>

void fun(int a[], int n, int p)
{
	int temp, i;
	p += 2;
	while(--p)
	{
		temp = a[0];
		for(i = 0; i < n - 1; i++)
			a[i] = a[i + 1];
		a[n - 1] = temp;
	}
}

int main(int argc, char const *argv[])
{
	int i, n, p;
	int a[] = {1, 2, 3, 4, 5, 6, 7};
	printf("input p\n");
	scanf("%d", &p);
	fun(a, sizeof(a) / sizeof(int), p);
	printf("the result is:\n");
	for(i = 0; i < 7; i++)
		printf("%d ", a[i]);
	return 0;
}
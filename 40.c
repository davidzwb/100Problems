//请编写函数fun，该函数的功能是移动字符串中内容，移动的规则如下：把第1到第m个字符，平移到字符串的最后，把第m＋1到最后的字符移到字符串的前部。


#include <stdio.h>

void fun(int a[], int n, int p)
{
	int temp, i;
	p += 1;
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
	printf("input m\n");
	scanf("%d", &p);
	fun(a, sizeof(a) / sizeof(int), p);
	printf("the result is:\n");
	for(i = 0; i < 7; i++)
		printf("%d ", a[i]);
	return 0;
}
#include <stdio.h>
//请编写一个函数int fun(int *s,int t,int *k),用来求返回数组的最大元素在数组中的下标,并将最大值存放在k所指的储存单元中。

int fun(int *s, int t, int *k)
{
	int nth = 0, n = t;
	*k = 0;
	while(t--)
	{
		if(*s > *k)
		{
			*k = *s;
			nth =  n - t;
			printf("test:%d\n", *s);
		}
		s++;
	}
	return nth;
}

int main(void)
{
	int s[10] = {1,2,3,4,11,6,7,22,9,10};
	int k;
	printf("nth:%d\n", fun(s, 10, &k));
	printf("%d\n", k);
	return 0;
}


//第请编写函数fun，该函数的功能使：统计各年龄段的人数。N个年龄通过调用随机函数获得，并放在主函数的age数组中；要求函数把0至9岁年龄段的人数放在d[0]中，把10至19岁年龄段的人数放在d[1]中，把20至29岁的人数放在d[2]中，其余以此类推，把100岁(含100以上年龄的人数都放在d[10]中。结果在主函数中输出。
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void fun(int a[11], int n)
{
	int age;
	srand((int)time(NULL));
	while(n--)
	{
		age = rand() % 150;
		//printf("age is:%d\n", age);
		if(age / 10 >= 10)
			a[10]++;
		else
			a[age / 10]++;
	}
}

int main(int argc, char const *argv[])
{
	int a[11] = {0};
	int i, n = 11;
	fun(a, n);
	for(i = 0; i < n; i++)
		printf("%d:%d\n", i, a[i]);
	return 0;
}
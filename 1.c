#include <stdio.h>
//第1题 m个人的成绩存放在score数组中，请编写函数fun,它的功能是：将低于平均分的人数作为函数值返回，将低于平均分的分数放在below所指定的数组中。
int score[] = {1, 24, 3546, 3, 57, 8765, 34, 454, 55};
int below[sizeof(score)/sizeof(int)] = {0};
int avg = 0;

int fun(int score[], int below[], int avg, int n)
{
	int i = 0, total = 0, k = 0;
	while(n--)
	{	if(score[i++] < avg)
		{
			total++;
			below[k++] = score[i];
		}
	}
	return total;
}

int main()
{	
	int n = 0;
	printf("Enter average:\n");
	scanf("%d", &avg);
	n = sizeof(score) / sizeof(int);
	printf("Number of people below average:%d\n", fun(score, below, avg, n));
	
	return 0;
}

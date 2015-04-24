//学生的记录由学号和成绩组成，n名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能使：把分数最高的学生数据放在h所指的数组中，注意：分数最高的学生可能不止一个，函数返回分数最高的学生的人数。

#include <stdio.h>

typedef struct stu
{
	int num;
	int score;
}STU;

int fun(STU *s, int n, STU *h)
{
	int max = 0;
	int i = n, j = 0;
	while(i--)
	{
		if(s->score > max)
			max = s->score;
		++s;
	}
	i = n;
	while(n--)
	{
		if(s->score == max)
		{
			h[j++].num = s->num;
			h[j++].score = s->score;
		}
		++s;
	}
}
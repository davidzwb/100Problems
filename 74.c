//学生的记录由学号和成绩组成n名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能时：把分数最低的学生数据放在h所指的数组中，注意：分数最低的学生可能不止一个，函数返回分数最低的学生的人数。

int fun(STU s[], int n, STU h[])
{
	int min = 101, j = 0;
	for (int i = 0; i < n; ++i)
	{
		if(s[i].score < min)
			min = s[i].score;
	}
	for (i = 0; i < n; ++i)
	{
		if(s[i].score == min)
			h[j++] = s[i];
	}
}
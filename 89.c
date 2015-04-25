//学生的记录是由学号和成绩组成，n名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能是：把高于等于平均分的学生数据放在b所指的数组中，高于等于平均分的学生人数通过形参n传回，平均分通过函数值返回。

int fun(STU s[], int n, STU b[])
{
	int k = 0;
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += s[i].score;
	}
	for (i = 0; i < n; ++i)
	{
		if(s[i].score >= sum / n)
			b[k++] = s[i];
	}
	return k;
}
//学生的记录由学号和成绩组称个，n名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能是：把低于平均分的学生数据放在b所指的数组中，低于平均分的学生人数通过形参n传回，平均分通过函数值返回。

int fun(STU s[], int n, STU b[], int *avg)
{
	int k = 0;
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += s[i].score;
	}
	*avg = sum / n;
	for (i = 0; i < n; ++i)
	{
		if(s[i].score < avg)
			b[k++] = s[i];
	}
	return k;
}
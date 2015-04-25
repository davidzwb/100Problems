//学生的记录是由学号和成绩组成，n名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能是：把指定分数范围内的学生数据放在b所指的数组中，分数范围内的学生人数由函数值返回。

int fun(STU s[], int n, int begin, int end, STU b[])
{
	int k = 0;
	for (int i = 0; i < n; ++i)
	{
		if(s[i].score > begin && s[i].score < end)
			b[k++] = s[i];
	}
	return k;
}
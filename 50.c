//已知学生的记录是由学号和学习成绩构成，n名学生的数据已存入a机构体数组中。请编写函数fun，该函数的功能是：找出成绩最高的学生记录，通过形参返回主函数(规定只有一个最高分)。

STU *fun(STU s[], int n)
{
	int i, max = 0;
	STU *p;
	for(i = 0; i < n; i++)
	{
		if(s[i].score > max)
		{
			max = s[i].score;
			p = &s[i];
		}
	}
	return p;
}
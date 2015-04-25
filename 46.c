//学生得记录由学号和成绩组称个，n名大学生得数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能时：按分数的高低排列学生的记录，高分在前。
typedef struct stu
{
	int num;
	int score;
} STU;

void fun(STU s[], int n)
{
	int max = 0;
	int k = 0;;
	STU temp;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			if(s[j].score > max)
			{
				max = s[j].score;
				k = j;
			}
		}
		temp = s[k];
		s[k] = s[i];
		s[i] = temp;

	}
}
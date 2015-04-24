//某学生的记录由学号、8门课程成绩和平均分组成，学号和8门课程的成绩已在主函数中给出。请编写函数fun，它的功能是：求出该学生的平均分放在记录的ave成员中。请自己定义正确的形参。 

void fun(STU s[], int n)
{
	int i = 0, sum = 0;
	while(n--)
	{
		sum += s[i].c1 + s[i].c2 + s[i].c3 + s[i].c4 + s[i].c5 + s[i].c6 + s[i].c7 + s[i].c8;
		s[i].ave = sum / 8;
	}
}
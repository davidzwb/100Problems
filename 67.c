//学生的记录时由学号和成绩组成，n名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能时：函数返回指定学号的学生数据，指定的学号在主函数中输入。若没找到指定学号，在结构体变量中给学号置空串，给成绩置-1,作为函数值返回(用于字符串比较的函数时strcmp)。

STU *fun(STU s[], int n, char *no)
{
	STU *p;
	for (int i = 0; i < n; ++i)
	{
		if(!strcmp(s[i].num, no)
			return &s[i];
	}
	p = (STU *)malloc(sizeof(STU));
	p->no = NULL;
	p->score = -1;
	return p;
}
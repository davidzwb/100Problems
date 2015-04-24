//假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：使字符串的前导*号不得多于n个；若多于n个，则删除多于的*号；若少于或等于n个，则什么也不做。字符串中间和尾部的*号不删除。

void fun(char *s , int n)
{
	int count = 0;
	char *p;
	while(*s == 42)
	{
		if(++count > n)
		{
			p = s;
			while(*(p + 1))
				*p = *(p + 1);
		}
		else
			s++;
	}
}
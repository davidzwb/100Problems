//假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：只删除字符串前导和尾部的*号，串中字母之间的*号都不删除。形参n 给出了字符串的长度，形参h给出了字符串中前导*号的个数，形参e给出了字符串中最后的*个数。在编写时不得使用c语言给提供得字符串函数。

void fun(char *s, int n, int h, int e)
{
	s[n - e] = '\0';//nullify the last *s;
	while(h--)
	{
		while(*(s + 1))
		{
			*s = *(s + 1);
			s++;
		}
		*s = '\0';
	}
}
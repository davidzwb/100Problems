//请编写函数fun，其功能是：将s所指字符串中ascii值为奇数的字符删除，串中剩余字符形成一个新串放在t所指的数组中。

void fun(char *s, char *t)
{
	int i = 0, j, k = 0;
	while(s[i])
	{
		j = i;
		//printf("%c:%d\n", s[j], j);
		if(i % 2 != 0)
		{
			t[k++] = s[j];
			while(s[j + 1])
			{
				s[j] = s[j + 1];
				j++;
			}
			s[j] = '\0';
		}
		i++;
	}
}
//请编写函数fun，其功能是：将s所指字符串中除了下标为奇数、同时ascii值也为奇数的字符之外，其余的所有字符都删除，串中剩余字符所形成的一个新串放在t所指的一个数组中。

#include <stdio.h>

void fun(char *s, char *t)
{
	int i = 0, j, k = 0;
	while(s[i])
	{
		j = i;
		//printf("%c:%d\n", s[j], j);
		if(i % 2 == 0 || s[i] % 2 == 0)
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

int main(int argc, char const *argv[])
{
	char str[10] = {'\0'};
	char str2[10] = {'\0'};
	printf("input a string\n");
	scanf("%s", str);
	fun(str, str2);
	printf("s: %s\nt: %s\n", str, str2);
	return 0;
}
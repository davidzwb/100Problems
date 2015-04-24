//假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：将字符串中的前导*号全部移到字符串的尾部。
#include <stdio.h>

void fun(char *s)
{
	int i = 0, j;
	while(s[i] == 42)
	{
		j = i;
		while(s[j + 1])
		{
			s[j] = s[j + 1];
			++j;
		}
		s[j] = 42;
		//++i;
	}
}

int main(int argc, char const *argv[])
{
	char str[256];
	int i = 0;
	printf("input a string\n");
	scanf("%s", str);
	fun(str);
	printf("%s\n", str);
	return 0;
}

//请别写函数fun，该函数的功能是：将放在字符串数组中的m个字符串(每串的长度不超过n)，按顺序合并组成一个新的字符串。
#include <stdio.h>
#include <string.h>

void fun(char *s[], int n, char *p)
{
	int i;
	for(i = 0; i < n; i++)
	{
		strcat(p, s[i]);
	}
}
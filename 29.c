//请编写一个函数fun，它的功能是：将ss所指字符串中所有下标为奇数位置上的字母转换为大写(若该位置上不是字母，则不转换)。
#include <stdio.h>

void fun(char *ss)
{
	int i;
	for(i = 0; ss[i] != '\0'; i++)
	{
		if(i % 2 == 1)
		{
			if(ss[i] >= 97 && ss[i] <= 122)
			{
				ss[i] -= 32; 
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	char str[10];
	printf("input a string\n");
	scanf("%s", str);
	fun(str);
	printf("%s\n", str);
	return 0;
}
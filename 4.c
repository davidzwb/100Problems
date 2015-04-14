#include <stdio.h>

//第4题 请编写一个函数void fun(char *tt,int pp[]),统计在tt字符中"a"到"z"26各字母各自出现的次数，并依次放在pp所指的数组中。

void fun(char *tt, int pp[])
{
	while(*tt)
	{
		pp[*tt - 97]++;
		tt++;
	}
}

int main(void)
{
	int pp[26] = {0}, n = 0;
	char tt[256] = {'\0'};
	printf("insert a string:\n");
	scanf("%s", tt);
	fun(tt, pp);
	for(n; n < sizeof(pp) / sizeof(int); n++)
		printf("%c:%d\n", n + 97, pp[n]);
	return 0;
}

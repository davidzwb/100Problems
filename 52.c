//编写一个函数fun，它的功能是：实现两个字符串的连接(不使用库函数strcat)，即把p2所指的字符串连接到p1所指的字符串后。
#include <string.h>

void fun(char *p1, char *p2)
{
	int n = strlen(p1);
	while(*p2)
		p1[n++] = *(p2++);
	p1[n] = '\0';
}
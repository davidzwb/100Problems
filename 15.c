/*
 * =====================================================================================
 *
 *       Filename:  15.c
 *
 *    Description:  请编写一个函数unsigned fun(unsigned w),w使一个大于10的无符号整数，若w使n(n≥2)位的整数，则函数求出w后n－1位的数作为函数值返回。
 *
 *        Version:  1.0
 *        Created:  2015年04月14日 22时35分12秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

unsigned int fun(unsigned int w)
{
	if(w >= 10)
		return w / 10;
	else
		return w;
}

int main(int argc, char const *argv[])
{
	unsigned int w;
	printf("input a number:\n");
	scanf("%u", &w);
	printf("%u\n", fun(w));
	return 0;
}
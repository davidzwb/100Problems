#include <stdio.h>
#include <string.h>
//请编写一个函数void fun(char a[],char b[],int n),其功能是：删除以各字符串中指定下标的字符。其中，a指向原字符串，删除后的字符串存放在b所指的数组中，n中存放指定的下标。

void fun(char a[], char b[], int n)
{
	a[n] = '\0';
	strcpy(b, &a[0]);
	strcat(b, &a[n+1]);
}

int main(void)
{
	int n = 0;
	char a[256] = {'\0'};
	char b[256] = {'\0'};
	printf("Please input the string you want to process:\n");
	scanf("%s", a);
	printf("Please input nth element to remove:\n");
	scanf("%d", &n);
	fun(a, b, n - 1);
	puts(b);
	return 0;
}

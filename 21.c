//请编写函数fun,对长度位7个字符的字符串，除首尾字符外，将其余5个字符按ascii码降序排列。
#include <stdio.h>

void fun(char *str)
{
	 int i, j, n, max;
	 for(i = 1; i <= 5; i++) //selection sort;
	 {
	 	printf("%s\n", str);
	 	j = i;
	 	n = i;
	 	max = str[j];
	 	while(j <= 5)
	 	{
	 		if(str[j] > max)
	 		{
	 			max = str[j];
	 			n = j;
	 		}
	 		j++;
	 	}
	 	str[n] = str[i];
	 	str[i] = max;
	 }
}

int main(int argc, char const *argv[])
{
	char str[10];
	printf("input a string of 7 elements\n");
	scanf("%s", str);
	fun(str);
	printf("%s\n", str);
	return 0;
}
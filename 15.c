
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
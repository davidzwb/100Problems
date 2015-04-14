#include <stdio.h>

	int a[100] = {0};

int fun(void)
{
	int n = 0, i = 0;
	for(;n <=100; n++)
	{
		if(n % 7 == 0)
			if(n % 11 != 0)
				a[i++] = n;
		else if(n % 11 == 0)
			if(n % 7 != 0)
				a[i++] = n;
			
	}		
	return i;	
}

int main(void)
{	
	int i = 0;
	printf("number:%d\n",fun());
	while(a[i++])
		printf("%d\n",a[i]);
	return 0;
}

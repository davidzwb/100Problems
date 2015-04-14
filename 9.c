//编写一个函数fun，它的功能是：根据以下公式求p的值，结果由函数值带回。M与n为两个正整数，且要求m>n。 p=m!/n!(m-n)!

int factorial(int n)
{
	int i = 1, sum = 0;
	for(i; i <= n; i++)
		 sum += i;
	return sum;
}

float fun(int m, int n)
{
	float p;
	if(m > n)
		p = (float)factorial(m) / (factorial(n) * factorial(m - n));
	else
		puts("m < n!\n");
}

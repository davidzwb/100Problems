void fun(int x, int pp[], int *n)
{
	int n = 0, i = 0;
	for(; n <= 100; n++)
	{
		if((n % x == 0) && (n % 2 != 0))
			pp[i++] = n;
	}
	*n = i;
}

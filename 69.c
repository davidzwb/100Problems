//请编写一个函数fun，它的功能时：求fibonacci数列中大于t的最小的一个数，结果由函数返回。其中fibonacci数列f(n)的定义为：f(0)=0,f(1)=1,f(n)=f(n-1)+f(n-2)

int fun(int t)
{
	int a=1,b=1,c=0,i;
	for(i=4;i＜=t;i++)
	{
		if(c＜t)
		{
			c=a+b;
			a=b;
			b=c;
		}
		else
			break;
	}
	return c;
}

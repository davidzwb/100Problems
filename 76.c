//请编写函数fun，其功能时：计算并输出当x<0.97时下列多项式的值，直到｜sn-s(n-1)｜<0.000001为止。Sn=1+0.5x+0.5(0.5-1)/2!x(2)+…+0.5(0.5-1)(0.5-2)…..(0.5-n+1)/n!x(n)

double fun(double x)
{
	double s1=1.0,p=1.0,sum=0.0,s0,t=1.0;
	int n=1;
	do
	{
		s0=s1;
		sum+=s0;
		t*=n;
		p*=(0.5-n+1)*x;
		s1=p/t;
		n++;
	}
	while(fabs(s1-s0)>1e-6);
	return sum;
}
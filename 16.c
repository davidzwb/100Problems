//请编写一个函数float fun(double h),函数的功能使对变量h中的值保留2位小树，并对第三位进行四舍五入(规定h中的值位正数)

#include <stdio.h>
#include <stdint.h>

float fun(double h)
{
	int64_t intpart = (int64_t)h;
	double fracpart = h - intpart; //to get frational part
	int64_t threeunit = (int64_t)(fracpart * 1e3); //get 3 digits of the fractional part 
	int64_t twounit = (int64_t)(fracpart * 1e2); //get 2 digits of the fractional part
	if((threeunit - twounit * 10) >= 5)
		return intpart + twounit * 0.01 + 0.01;
	else
		return intpart + twounit * 0.01;
}

int main(int argc, char const *argv[])
{
	double num;
	printf("input a number\n");
	scanf("%lf", &num);
	printf("%.2f\n", fun(num));
	return 0;
}
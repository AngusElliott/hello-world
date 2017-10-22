#include <stdio.h>
#include <float.h>
#include <stdlib.h>
double square(double m,double n);
double func(int x);
int main()
{
	double x1=2.4;
	double x2=func(x1);
	double x3=square(x1,x2);
	printf("%lf-----%lf\n",x2,x3);
	return 0;
}
double func(int x)
{
	return x;
}
double square(double x1,double x2)
{
	double x3;
	x3=x1-x2;
	return x3;
}

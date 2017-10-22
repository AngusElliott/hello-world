#include <stdio.h>
#include <float.h>
#include <stdlib.h>
double func(double x);
void show()
{
	printf("张璐，任毅，杨骋");
}
int main()
{
	double d1=2.2;
	double d2=func(d1);
	printf("%lf----%lf\n",d1,d2);
	show();
	return 0;
}
double func(double x)
{
	return x*x;
}

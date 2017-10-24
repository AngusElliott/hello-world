#include <stdio.h>
#include <stdlib.h>
#include <float.h>
double func(int m);
int main ()
{
	float a=0.756,b; 
	b=a*100; 
	b+=0.5; 
	double x=func(b);
	b=x/100;
	printf("b=%lf\n",b);
	
	return 0;
}
double func (int m)
{
	return m;
}


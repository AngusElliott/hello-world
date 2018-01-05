#include <stdio.h>
#include <math.h>
int main()
{
	int T;
	double p,s,a,b,c;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
		scanf("%lf %lf %lf",&a,&b,&c);
		if(a+b>c&&a+c>b&&b+c>a)
		{
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("%.2lf\n",s);
		}
		else
		printf("error\n");
	}
	return 0;
 } 

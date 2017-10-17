#include <stdio.h>
#include <float.h>
int main(void)
{
	int x=2.2;
	short y=0x7FFF;
	short z=0xFFFF;
	unsigned short w=0xFFFF;
	float u=0.177;
	printf("%d %d %d %lf %e %e\n",x,y,z,w,u, DBL_MAX, DBL_MIN);
	return 0;
 }

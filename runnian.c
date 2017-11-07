#include <stdio.h>
int main()
{
	int year;
	printf("");
	scanf("%d",&year);
	if(year%4==0&&year%100!=0||year%100==0)
	printf("%dÊÇÈòÄê",year);
	else
	    printf("%d²»ÊÇÈòÄê",year);
	
	return 0; 
} 

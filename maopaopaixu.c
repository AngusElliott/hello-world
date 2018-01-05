#include <stdio.h>

int main(){
	int n,k;
	scanf("%d", &n);
	int marbles[n];
	for(k = 0; k<n; k++)
	{
		scanf("%d", &marbles[k]);
	}
	int i,j,temp;
	for(i=n-1;i>0;i--)
	{
		for(j = 0;j<i;j++)
		{
			if(marbles[j]>marbles[j+1])
		    {
		    	temp=marbles[j];
		    	marbles[j]=marbles[j+1];
		    	marbles[j+1]=temp;
		    }
		}
		for(k=0;k<n;k++)
		{
			printf("%d ", marbles[k]);
		}
		putchar('\n');
	}
	return 0;
}

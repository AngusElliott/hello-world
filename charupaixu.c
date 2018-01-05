#include <stdio.h>
int main()
{
	int n,rem,i,j,k;
	scanf("%d", &n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d", &rem);
		if(rem>a[i])
		  a[i]=rem;
		for(j=0;j<=i;j++)
		{
			if(rem<=a[j])
			{
				for(k=i+1;k>j;k--)
				{
					a[k]=a[k-1];
				}
				a[j]=rem;
				break;
			}
		}
		for(j=0;j<=i;j++)
		{
			printf("%d ", a[j]);
		}
		putchar('\n');
	}
	return 0;
}

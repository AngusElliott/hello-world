#include <stdio.h>
int arr[101];
void bubblesort(int *a,int lenth);
void swap(int *,int *);
int main(void){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int m;
		scanf("%d",&m);
		for(int j=0;j<m;j++)
		  scanf("%d",&arr[j]);
		bubblesort(arr,m);
		int min=arr[0];
		int yes=0;
		for(int j=1;j<m;j++)
		{
			if(arr[j]>min)
			{
				yes=1;
				printf("%d\n",arr[j]);
				break;
			}
		}
		if(!yes)
		  printf("ERROR\n");
	 } 
	return 0;
}
void bubblesort(int *a, int lenth){
    int i,j;
    for(j = 0;j<lenth-1;j++)
    {
    	for(i = lenth-1;i>j;i--)
    	{
            if(*(a+i)<*(a+i-1))
            {
            	swap(a+i,a+i-1); 
			}
		}
	}
}

void swap(int *a, int*b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

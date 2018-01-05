#include <stdio.h>
void fj(int num);
int main(){
	int num;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	scanf("%d", &num);
	fj(num);
	}
	return 0;
} 

void fj(int num){
	int i;
	for(i=2;i<=num;i++)
	{
		while(num%i==0&&i!=num)
		{
			num = num/i;
			printf("%d*", i);
		} 
	} 
	printf("%d\n", num);
}

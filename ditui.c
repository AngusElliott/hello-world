#include 
int fun(int n)
{
if(n==1 || n==2)
return 1;
else
return fun(n-1)+fun(n-2);
}
void main() 
{ 
int n=10;
printf("%d\n",fun(n));
}

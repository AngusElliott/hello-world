#include<stdio.h>
int len(int n)
{
if(n/1000!=0)
return 4;
else if(n/100!=0)
return 3;
else if(n/10!=0)
return 2;
else
return 1;
}
void main()
{
int n,t=1,m=0,i,j,k=0,max=0,sum=0,l=0,s[10000]={0};
scanf("%d",&n);
for(j=n;j>100;j--)
{
for(i=2;i<j;i++)
{if(j%i!=0)
t++;
else
break;
if(t==j-1)
m=j;}
t=1;
k=0;
while(m)
{
for(i=2;i<m;i++)
if(m%i!=0)
t++;
if(t==m-1)
k++;
m/=10;
t=1; 
}
t=1;
if(k==len(j))
s[j]=j;
}
for(i=0;i<10000;i++)
if(s[i]!=0)
{
sum+=s[i];
l++;
if(max<s[i])
max=s[i];
}
printf("%d\n%d\n%d\n",l,sum,max);//printf("%d\n%d\n%d",l+1,sum,max);
}

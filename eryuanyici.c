#include<iostream>
using namespace std;
void main()
{
 float a,b,c,d,e,f;
 cout<<"\n"
  <<"ax+by+c=0\n"
  <<"dx+ey+f=0\n";
 cout<<"a=";
 cin>>a;
 cout<<"b=";
 cin>>b;
 cout<<"c=";
 cin>>c;
 cout<<"d=";
 cin>>d;
 cout<<"e=";
 cin>>e;
 cout<<"f=";
 cin>>f;
 if(a*e==b*d)
  cout<<\n";
 else
 {
  cout<<"x="<<(b*f-e*c)/(a*e-b*d)<<endl;
  cout<<"y="<<(a*f-d*c)/(b*d-a*e)<<endl; 
 }
}

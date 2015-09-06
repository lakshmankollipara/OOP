#include<iostream>
using namespace std;
int power(int x,int y)
{
int i,v=1;
for(i=0;i<y;i++)
v=v*x;
return(v);
}
int main()
{
int x,y,a,b,v;
int power(int x,int y=2);

cout<<"Enter the number and the power"<<endl;
cin>>a>>b;
v=power(a,b);
cout<<"The result is"<<v<<endl;
}

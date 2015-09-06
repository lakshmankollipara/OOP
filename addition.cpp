#include<iostream>
#include<cstring>
using namespace std;
int add(int a,int b)
{
int s;
s=a+b;
return s;
}
float add(float a,float b)
{
float r;
r=a+b;
return r;
}
void add(char a[10],char b[10])
{
a=strcat(a,b);
cout<<"strings\t"<<a<<"\n";
}
main()
{
 int m,n,d;
 char a[10];char c[10];char b[10];
 float r,s,t;
 cout<<"Enter two integers\n";
 cin>>m>>n;
 d=add(m,n);
 cout<<"integers\t"<<d<<"\n";
 cout<<"Enter two floating values\n";
 cin>>r>>s;
 t=add(r,s);
 cout<<"float\t"<<t<<"\n";
 cout<<"Enter the strings\n";
 cin>>a>>b;
add(a,b);

}

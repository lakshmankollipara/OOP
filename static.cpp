#include<iostream>
#include<cmath>
using namespace std;
class great
{
static int a,b,c;
public:
void grade();
static void get()
{
cout<<"enter the values of a,b,c:\n";
cin>>a>>b>>c;
}
};
void great:: grade()
{
if((a>b)&&(a>c))
{
cout<<"a is greater\n";
}
else if((b>c)&&(b>a))
{
cout<<"b is greater\n";
}
else if((c>b)&&(c>a))
{
cout<<"c is greater\n";
}
if((a<b)&&(a<c))
{
cout<<"a is lowest\n";
}
else if((b<c)&&(b<a))
{
cout<<"b is lowest\n";
}
else if((c<b)&&(c<a))
{
cout<<"c is lowest\n";
}
}
int great::a;
int great::b;
int great::c;
int main()
{
great x;
x.get();
x.grade();
}

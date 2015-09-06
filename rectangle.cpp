#include<iostream>
using namespace std;
class rectangle
{
int l,w;
public:
rectangle()
{
int a;
l=2;
w=3;
a=l*w;
cout<<"\narea of rectangle:"<<a;
}
rectangle(int length,int width)
{
int a;
l=length;
w=width;
a=l*w;
cout<<"\narea of rectangle:"<<a;
}
rectangle(rectangle &r)
{
int a;
l=r.l;
w=r.w;
a=l*w;
cout<<"\narea of rectangle:"<<a;
}
};
int main()
{
rectangle r;
int x,y;
cout<<"\nenter the length and width:";
cin>>x>>y;
rectangle r1(x,y);
rectangle r2(r);
return 0;
}

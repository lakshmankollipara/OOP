#include<iostream>
using namespace std;
class shape
{
public:
virtual void area(){}
virtual void vol(){}
};
class twd:public shape
{
public:
void area()
{
cout<<"\n AREA \n";
}
};
class thrd:public shape
{
public:
void vol()
{
cout<<"\n VOLUME \n";
}
};
class tri:virtual public twd
{
int a,b;
public:
void area()
{
cout<<"\nenter base and height of the triangle:";
cin>>a>>b;
cout<<"area is\t"<<0.5*a*b;
}
};
class rect:virtual public twd
{
int a,b;
public:
void area()
{
cout<<"\nenter length and bredth of the rectangle:";
cin>>a>>b;
cout<<"area is\t"<<a*b;
}
};
class cub:virtual public thrd
{ 
int a;
public:
void vol()
{
cout<<"\nenter the length of the cube:";
cin>>a;
cout<<"\n the volume of cube is\t"<<a*a*a;
}
};
class con:virtual public thrd
{ 
float a,b;
public:
void vol()
{
cout<<"\nenter the heigth and radius of the cone:";
cin>>a>>b;
cout<<"\n the volume of cone is\t"<<(((3.142)*b*b*a)/3);
}
};
class cyli:virtual public thrd
{
float a,b;
public:
void vol()
{
cout<<"\nenter the heigth and radius of the cylinder:";
cin>>a>>b;
cout<<"\n the volume of cylinder is\t"<<((3.142)*b*b*a);
}
};
int main()
{
shape *s,s1;
twd t;
thrd tr;
tri t1;
rect re;
cub cu;
con co;
cyli cy;
s=&t;
s->area();
s=&t1;
s->area();
s=&re;
s->area();
s=&tr;
s->vol();
s=&cu;
s->vol();
s=&co;
s->vol();
s=&cy;
s->vol();
return 0;
}

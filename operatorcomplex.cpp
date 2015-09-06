#include<iostream>
using namespace std;
class complex
{
int x,y;
public:
complex()
{
}
complex(int real,int img)
{
x=real;
y=img;
}
complex operator +(complex);
complex operator -(complex);
complex operator *(complex);
void operator >(complex);
void display();
};

complex complex::operator +(complex c)
{
complex temp;
temp.x=x+c.x;
temp.y=y+c.y;
return temp;
}

complex complex::operator -(complex c)
{
complex temp;
temp.x=x-c.x;
temp.y=y-c.y;
return temp;
}

complex complex::operator *(complex c)
{
complex temp;
temp.x=x*c.x;
temp.y=y*c.y;
return temp;
}

void complex::operator >(complex c)
{
if(x>c.x)
cout<<x<<"+i"<<y<<"is greater than"<<c.x<<"+i"<<c.y<<"\n";
else if(x<c.x)
cout<<x<<"+i"<<y<<"is less than"<<c.x<<"+i"<<c.y<<"\n";
else if(x=c.x)
{
if(y>c.y)
cout<<x<<"+i"<<y<<"is less than"<<c.x<<"+i"<<c.y<<"\n";
else if(y<c.y)
cout<<x<<"+i"<<y<<"is greater than"<<c.x<<"+i"<<c.y<<"\n";
} 
}
void complex::display()
{
cout<<x<<"+i"<<y<<"\n";
}

int main()
{
complex c1,c2,c3,c4,c5,c6;
int a,b,c,d;
cout<<"enter any four numbers"<<"\n";
cin>>a>>b>>c>>d;
c1=complex(a,b);
c2=complex(c,d);
c3=c2+c1;
c4=c1-c2;
c5=c1*c2;
cout<<"c1=";
c1.display();
cout<<"c2=";
c2.display();
cout<<"sum of the two numbers is\n";
c3.display();
cout<<"difference of the two numbers is\n";
c4.display();
cout<<"product of the numberes is\n";
c5.display();
c1>c2;
return 0;
}

#include<iostream>
using namespace std;
class comp
{
int x,y;
public:
comp(){}
comp(int real,int imag)
{
x=real;
y=imag;
}
friend void operator -(comp);

void operator ++()
{
cout<<"after prefix ++\n";
x=++x;
y=++y;
cout<<x<<"+i"<<y<<"\n";
}

comp operator ++(int)
{
cout<<"after postfix ++\n";
x=x++;
y=y++;
return *this;
}

void operator --()
{
cout<<"after prefix --\n";
x=--x;
y=--y;
cout<<x<<"+i"<<y<<"\n";
}


void disp()
{
cout<<x<<"+i"<<y<<"\n";
}
};

void operator -(comp a)
{
a.x=-a.x;
a.y=-a.y;
cout<<"after the operation\n";
cout<<a.x<<"+i"<<"("<<a.y<<")"<<"\n";
}

int main()
{
comp c1,c2;
int p,q;
cout<<"enter any two no\n";
cin>>p>>q;
c1=comp(p,q);
-c1;
++c1;
c2=c1++;
c2.disp();
--c1;
}



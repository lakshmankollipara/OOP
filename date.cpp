#include<iostream>
using namespace std;
class date
{
int dat,mon,yr;
public:
date()
{
dat=21;
mon=10;
yr=2010;
}
date(int x,int y,int z)
{
dat=x;
mon=y;
yr=z;
}
date(date &d)
{
dat=d.dat;
mon=d.mon;
yr=d.yr;
}
void display()
{
cout<<dat<<"-"<<mon<<"-"<<yr<<"\n";
}
void diff(date d1,date d2)
{
int year;
if (d1.yr>d2.yr)
year=d1.yr-d2.yr;
else
year=d2.yr-d1.yr;
cout<<"difference is:"<<year<<"years"<<"\n";
}
};

int main()
{
date d;
int a,b,c;
cout<<"today date:"<<"\n";
date ();
d.display();
cout<<"enter date"<<"\n";
cin>>a>>b>>c;
date d1(a,b,c);
date d2;
d.diff(d1,d2);
return 0;
}


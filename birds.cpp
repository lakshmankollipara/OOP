#include<iostream>
#include<iomanip>
using namespace std;
class bird
{
protected:
char a[10],wings;
public:
void get()
{
cout<<"enter a bird name:"<<"\n";
cin>>a;
cout<<"wings are their or not[y/n]: ";
cin>>wings;
}
void put()
{
cout<<a<<endl;
}
};
class flyng:public bird
{
public:
void look()
{
if(wings=='y')
{
put();
cout<<"wings are there"<<"\n"<<"so it is a flying bird"<<endl;
}
else
{
cout<<"wings are not there"<<"\n"<<"so it is not a flying bird"<<endl;
}
}
};
class nonflyng:public bird
{
public:
void print()
{
if(wings=='n')
{
cout<<"it is not a flying bird";
}
else
{
cout<<"its a flying bird"<<endl;
}
}
};
int main()
{
bird b;
flyng f;
nonflyng n;
f.get();
f.look();
n.get();
n.print();
return 0;
}

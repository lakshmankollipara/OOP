#include<iostream>
#include<iomanip>
using namespace std;
class tym
{
private:
int hr,min;
public:
void getdata()
{
cin>>hr>>min;
}
void putdata()
{
cout<<hr<<":"<<min<<endl;
}
tym operator >(tym t)
{
int n1,n2;
n1=hr*60;
n1=n1+min;
n2=t.hr*60;
n2=n2+min;
if(n1>n2)
{
cout<<"t1>t2"<<endl;
cout<<" the starting time is:";
return t;
}
else
{
cout<<"t1<t2"<<endl;
cout<<" the starting time is:";
return *this;
}
}
void operator -(tym t)
{
tym temp;
int n1,n2;
n1=hr*60;
n1=n1+min;
n2=t.hr*60;
n2=n2+t.min;
if(n1>n2)
{
n1=n1-n2;
temp.hr=n1/60;
temp.min=n1%60;
temp.putdata();
}
else
{
n2=n2-n1;
temp.hr=n2/60;
temp.min=n2%60;
temp.putdata();
}
}
};
int main()
{
tym t1,t2;
cout<<"enter any two times:";
t1.getdata();
t2.getdata();
cout<<"you entered\n";
t1.putdata();
t2.putdata();
tym t3;
t3=t1>t2;
t3.putdata();
cout<<"Duration time is:";
t1-t2;
return 0;
}

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
class employee
{
int empno,basic;
float da,hra,pf,gross,netpay;
char name[10];
public:
void get();
void calc();
void put();
};
void employee:: get()
{
cout<<"enter the employee number:"<<endl;
cin>>empno;
cout<<"enter the employee name:"<<endl;
cin>>name;
cout<<"enter the basic salary:"<<endl;
cin>>basic;
}
void employee:: calc()
{
da=(0.1)*basic;
hra=(0.12)*basic;
pf=(0.2)*basic;
gross=da+hra+basic;
netpay=gross-pf;
}
void employee:: put()
{
cout<<"emp no:"<<setw(10)<<"emp name:"<<setw(10)<<"DA:"<<setw(10)<<"HRA:"<<setw(10)<<"GROSS:"<<setw(10)<<"NET PAY:"<<setw(10);
cout<<endl;
cout<<empno<<setw(6)<<name<<setw(6)<<da<<setw(6)<<hra<<setw(6)<<setprecision(3)<<fixed<<gross<<setw(6)<<setprecision(4)<<fixed<<netpay<<setw(6)<<endl;
}
int main()
{
int i;
employee x[2];
for(i=0;i<2;i++)
{
x[i].get();
x[i].calc();
x[i].put();
}
return 1;
}

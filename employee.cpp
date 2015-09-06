#include<iostream>
using namespace std;
struct emp
{
int no;
char n[30];
float basic;
}e[10];
int display(int i)
{
float da,hra,pf,gross,net;
da=0.2*e[i].basic;
hra=0.1*e[i].basic;
pf=0.12*e[i].basic;
gross=e[i].basic+da+hra;
net=gross-pf;
cout<<"The netpay is ="<<net;
}
int get(int i)
{
cout<<"enter the name of employee";
cin>>e[i].n;
cout<<"enter the employee number";
cin>>e[i].no;
cout<<"enter the basic salary";
cin>>e[i].basic;
return(0);
}
int main()
{
int i;
for(i=0;i<10;i++)
{
get(i);
display(i);
cout<<"\n";
}
}

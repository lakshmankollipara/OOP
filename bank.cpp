#include<iostream>
using namespace std;
struct bank
{
char name[10];
int accno;
float balance;
char type[10];
}s;
int main()
{
cout<<"enter the accountant name";
cin>>s.name;
cout<<"enter the account number";
cin>>s.accno;
cout<<"enter the account type";
cin>>s.type;
cout<<"enter the account balance";
cin>>s.balance;
cout<<"\naccountant name "<<s.name;
cout<<"\naccount number"<<s.accno;
cout<<"\naccount type"<<s.type;
cout<<"\naccount balance"<<s.balance;
}

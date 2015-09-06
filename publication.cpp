#include<iostream>
using namespace std;
class publication
{
public:
virtual void store()=0;
virtual void show()=0;
};
class books:public publication
{
public:
char bname[10];int price;
void store()
{
cout<<"enter the book name and its price\n"; 
cin>>bname>>price;
} 
void show()
{
cout<<bname<<"\t\t"<<price<<"\n";
}
};
class tapes:public publication
{
public:
char tname[10];int p;
void store()
{
cout<<"enter the tape name and its price\n";
cin>>tname>>p;
}
void show()
{
cout<<tname<<"\t\t"<<p<<"\n";
}
};
main()
{
publication *p[10];int i;
books b;
tapes t;
for(i=0;i<3;i++)
{
p[i]=&b;
p[i]->store();
cout<<"Book Name\t\tPrice\n";
p[i]->show();
}
for(i=0;i<3;i++)
{
p[i]=&t;
p[i]->store();
cout<<"Tape Name\t\tPrice\n";
p[i]->show();
}
cout<<"Tape Name\t\tPrice\n";
}

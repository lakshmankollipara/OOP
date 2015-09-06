#include<iostream>
#include<iomanip>
using namespace std;
class patient
{
public:
char a[10],s;
int age;
char add[25];
void getdata()
{
cout<<"enter name and gender of patient\n";
cin>>a>>s;
cout<<"enter age\n";
cin>>age;
cout<<"enter address\n";
cin>>add;
}
void putdata()
{
cout<<"name,gender is  "<<a<<" "<<s;
cout<<"age is "<<age;
cout<<"address is  "<<add;
}
};
class treatment:virtual public patient
{
public:
char j[10],n[10];
int f;
void get()
{
cout<<"enter type of illness \n";
cin>>j;
cout<<"enter name of doctor attending\n";
cin>>n;
cout<<"enter fee ";
cin>>f;
}
void put()
{
cout<<"illness is   "<<j<<"\n";
cout<<"doctor attending is  "<<n<<"\n";
cout<<"fee is  "<<f<<"\n";
}
};
class room:virtual public patient
{
public:
int rno,dat,mon,yr;
char r[10];
int d;
void getd()
{
cout<<"enter room no\n";
cin>>rno;
cout<<"enter type of room general/vip/1st class\n";
cin>>r;
cout<<"enter date of admission";
cin>>dat>>mon>>yr;
cout<<"enter no of days";
cin>>d;
}
void putd()
{
cout<<"room no is  "<<rno<<"\n";
cout<<"type of room is  "<<r<<"\n";
cout<<"date of admission is "<<dat<<"-"<<mon<<"-"<<yr<<"\n";
cout<<"no of days "<<d<<"\n";
}
};
class bill:public treatment,public room
{
public:
int b,h;
void get1()
{
cout<<"amount per day";
cin>>b;
cout<<"enter total days ";
cin>>h;
b=b*h;
}
void put1()
{
cout<<"total amount is  "<<b;
}
};
int main()
{
bill b1;
b1.getdata();
b1.get();
b1.getd();
b1.get1();
b1.putdata();
b1.put();
b1.putd();
b1.put1();
return 0;
}



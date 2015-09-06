#include<iostream>
using namespace std;
class stud
{
char n[30];
int m1,m2,m3,r;
public:
void putdata(int);
void getdata(int)
{
cout<<"enter the student name";
cin>>n;
cout<<"enter the students roll no";
cin>>r;
cout<<"enter the marks in three subjects";
cin>>m1>>m2>>m3;
}
};
void stud::putdata(int)
{
int avg;
cout<<"The name of the student is :"<<n<<"\n";
cout<<"roll number is :"<<r<<"\n";
cout<<"marks in 3 subject is\n"<<m1<<"\n"<<m2<<"\n"<<m3<<"\n";
avg=(m1+m2+m3)/3;
cout<<"the avg is :"<<avg<<"\n";
if(avg<=100&&avg>=90)
{
cout<<"The grade is A";
}
else if(avg<90&&avg>=80)
{
cout<<"The grabe is B";
}
else if (avg<80&& avg>=70)
{
cout<<"The grade is C";
}
else if(avg<70&&avg>=60)
{
cout<<"The grade is D";
}
else
{
cout<<"The grade is F"; 
}
}
int main()
{
stud x[10];
int i;
for(i=0;i<10;i++)
{
x[i].getdata(i);
x[i].putdata(i);
cout<<"\n";
}
return(0);
}

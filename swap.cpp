#include<iostream>
using namespace std;
void integervalue(int m,int n)
{
int t;
t=m;
m=n;
n=t;
cout<<"\nint swap:"<<endl<<m<<endl<<n<<endl;
}
void integerpointer(int *m,int *n)
{
int t;
t=*m;
*m=*n;
*n=t;
}
void integerreference(int &m,int &n)
{
int t;
t=m;
m=n;
n=t;
}
void floatvalue(float m,float n)
{
float t;
t=m;
m=n;
n=t;
cout<<"\nfloat swap:"<<endl<<m<<endl<<n<<endl;
}
void floatpointer(float *m,float *n)
{
float t;
t=*m;
*m=*n;
*n=t;
}
void floatreference(float &m, float &n)
{
int t;
t=m;
m=n;
n=t;
}
void charactervalue(char m,char n)
{
char t;
t=m;
m=n;
n=t;
cout<<"\nchar swap:"<<endl<<m<<endl<<n<<endl;
}
void characterpointer(char *m,char *n)
{
char t;
t=*m;
*m=*n;
*n=t;
}
void characterreference(char &m,char &n)
{
int t;
t=m;
m=n;
n=t;
}
int main()
{
int a,b;
float g,h;
char x,y;
cout<<"Enter two int values:\n";
cin>>a>>b;
cout<<"Enter 2 float values:\n";
cin>>g>>h;
cout<<"Enter 2 characters:\n";
cin>>x>>y;
integervalue(a,b);
integerpointer(&a,&b);
integerreference(a,b);
cout<<"pointer swap:"<<endl<<a<<endl<<b<<endl;
cout<<"reference swap:"<<endl<<a<<endl<<b<<endl;
floatvalue(g,h);
floatpointer(&g,&h);
floatreference(g,h);
cout<<"pointer swap:"<<endl<<g<<endl<<h<<endl;
cout<<"reference swap:"<<endl<<g<<endl<<h<<endl;
charactervalue(x,y);
characterpointer(&x,&y);
characterreference(x,y);
cout<<"pointer swap:"<<endl<<x<<endl<<y<<endl;
cout<<"reference swap:"<<endl<<x<<endl<<y<<endl;
return 0;
}

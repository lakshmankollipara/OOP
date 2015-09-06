#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
class strr
{
char s1[20];
public:
strr()
{
}
strr(char c[20])
{
strcpy(s1,c);
}
strr operator+(strr s)
{
strr temp;
strcpy(temp.s1,s1);
strcat(temp.s1,s.s1);
return temp;
}
int operator==(strr s)
{
if(strcmp(s1,s.s1)==0)
return 1;
else
return 0;
}
int operator>(strr s)
{
if(strlen(s1)>strlen(s.s1))
return 1;
else
return 0;
}
void operator^(strr s)
{
int i;
char temp[20];
int x=strlen(s1);
for(i=0;i<x;i++)
{
temp[i]=s1[x-1-i];
}
temp[i]='\0';
if(strcmp(s.s1,temp)==0)
cout<<" reverse of A is B\n";
else
cout<<"not the reverse\n";
}
void display()
{
cout<<s1<<"\n";
}
};
int main()
{
strr A,B,C;
char c[20];
cout<<"string A ";
cin>>c;
A=strr(c);
cout<<"string B  ";
cin>>c;
B=strr(c);
C=A+B;
cout<<"A+B ";
C.display();
if(A>B)
cout<<"String A is greater than B\n";
else
cout<<"String A is not greater than B\n";
if(A==B)
cout<<"both are equal\n";
else
cout<<"both are not equal\n";
A^B;
return 0;
}

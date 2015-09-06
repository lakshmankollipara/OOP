#include<iostream>
using namespace std;
class sample
{
public:
int s;
void swap(sample s1,sample s2)
{
sample s3;
s3.s = s1.s;
s1.s = s2.s;
s2.s = s3.s;
cout<<"after swaping"<<"\n"<<"s1="<<s1.s<<"\t"<<"s2="<<s2.s;
}
};

int main()
{
sample s1,s2;
cout<<"enter 2 no"<<"\n";
cin>>s1.s>>s2.s;
s2.swap(s1,s2);
return 0;
}

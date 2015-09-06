#include<iostream>
using namespace std;
class sample
{
public:
int s;
void swap(sample *s1,sample *s2)
{
sample s3;
s3 = *s1;
*s1 = *s2;
*s2 = s3;
}
};

int main()
{
sample s1,s2;
cout<<"enter 2 no"<<"\n";
cin>>s1.s>>s2.s;
s2.swap(&s1,&s2);
cout<<"after swaping"<<"\n"<<"s1="<<s1.s<<"\t"<<"s2="<<s2.s<<"\n";
return 0;
}


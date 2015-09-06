#include<iostream>
using namespace std;
class x
{
int i;
char c;
public:
void pattern(char c,int i)
{
for(int j=0;j<i;j++)
cout<<c<<"\t";
cout<<"\n\n";
}
void pattern(char c)
{
for(int j=0;j<1;j++)
cout<<c<<"\t";
cout<<"\n\n";
}
};
int main()
{
x p;
p.pattern('=',6);
p.pattern('+',5);
p.pattern('&',4);
p.pattern('#',3);
p.pattern('$',2);
p.pattern('~');
return 0;
}


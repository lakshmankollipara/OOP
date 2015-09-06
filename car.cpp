#include<iostream>
using namespace std;
enum color{black,red,white,green,blue}e;
class car
{
int enginesize;
public:
car(int enginesize=360,color c=white)
{
color e=c;
cout<<"engine size:"<<enginesize<<"\n";
cout<<"engine colour:"<<e<<"\n";
}
};
int main()
{
color e=blue;
car e1;
car e2(500);
car e3(250,e);
return 0;
}

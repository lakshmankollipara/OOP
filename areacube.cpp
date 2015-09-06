#include<iostream>
using namespace std;
class cube
{
int x,a,b,c;
public:
int areacube(int l,int w=25,int h=1);
};
int cube:: areacube(int l,int w,int h)
{
int x;
x=l*w*h;
cout<<"area of cube:"<<x<<endl;
}
int main()
{
int a,b,c;
cube x;
cout<<"enter the length,width and height of the cube:"<<endl;
cin>>a>>b>>c;
x.areacube(a);
x.areacube(a,b);
x.areacube(a,b,c);
return 0;
}


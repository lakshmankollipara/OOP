#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
bool t=10;
int a=2,b=3,h=10;
float c=9.7658;
cout<<showpoint<<h<<endl;
cout<<noshowpoint<<h<<endl;
cout<<showpos<<h<<endl;
cout<<no showpos<<h<<endl;
cout<<a<<setw(3)<<b<<endl;
cout<<"show base for oct\n";
cout<<setprecission(3)<<fixed<<endl;
cout<<set precission(3)<<scientific<<endl;    
cout<<oct<<showbase<<h<<endl;
cout<<hex<<showbase<<h<<endl;
cout<<oct<<h<<endl;
cout<<setbase(2)<<h<<endl;
cout<<boolalpha<<t<<endl;
return 0;
}            


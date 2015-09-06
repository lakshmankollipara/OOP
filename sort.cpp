#include<iostream>
using namespace std;
class x
{
int a[10],i,j;
public:
friend void get(x &b);
friend void display(x &b);
friend void sort(x &b);
friend void replace(x &b);
};
void get(x &b)
{
cout<<"Enter the elements of array\n";
for(b.i=0;b.i<10;b.i++)
{
cin>>b.a[b.i];
}
}
void display(x &b)
{
for(b.i=0;b.i<10;b.i++)
cout<<b.a[b.i]<<"\t";
}
void sort(x &b)
{
int temp;
for(b.i=0;b.i<10;b.i++)
for(b.j=b.i+1;b.j<10;b.j++)
{
if(b.a[b.j]<b.a[b.i])
{
temp=b.a[b.i];
b.a[b.i]=b.a[b.j];
b.a[b.j]=temp;
}
}
}
void replace(x &b)
{
 b.a[0]=0;
 b.a[9]=0;
}
main()
{
x c;
get(c);
cout<<"\narray:";
display(c);
sort(c);
cout<<"\nsorted array:";
display(c);
replace(c);
cout<<"\narray after replacing:";
display(c);
}

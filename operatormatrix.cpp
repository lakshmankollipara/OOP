#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
class mat
{
int m1[3][3];
public:
void getdata()
{
int i,j;
for(i=0;i<3;i++)
for(j=0;j<3;j++)
cin>>m1[i][j];
}
void putdata()
{
int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
cout<<m1[i][j]<<"\t";
cout<<endl;
}
}
mat operator+(mat m)
{
mat temp;
int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
temp.m1[i][j]=m1[i][j]+m.m1[i][j];
}
return temp;
}
mat operator-(mat m)
{
mat temp;
int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
temp.m1[i][j]=m1[i][j]-m.m1[i][j];
}
return temp;
}
mat operator*(mat m)
{
mat temp;
int i,j,k;
for(i=0;i<3;i++)
for(j=0;j<3;j++)
temp.m1[i][j]=0;
for(i=0;i<3;i++)
{
for(k=0;k<3;k++)
{
for(j=0;j<3;j++)
{
temp.m1[i][k]=temp.m1[i][k]+(m1[i][j]*m.m1[j][k]);
}
}
}
return temp;
}
int operator==(mat m)
{
int i,j;
int flag=1;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(m1[i][j]!=m.m1[i][j])
flag=0;
}
}
if(flag==1)
return 1;
else
return 0;
}
};
int main()
{
mat A,B,C;
cout<<" elements of matrix A : \n";
A.getdata();
cout<<" elements of matrix B : \n";
B.getdata();
C=A+B;
cout<<"A+B is\n";
C.putdata();
C=A-B;
cout<<"A-B is \n";
C.putdata();
C=A*B;
cout<<"A*B is \n";
C.putdata();
if(A==B)
cout<<"A is equal to B\n";
else
cout<<"A is not equal to B\n";
return 0;
}

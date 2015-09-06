#include<iostream>
using namespace std;
class B;
class A
{ int a[10][10];
  int i,j,n;
  public:
  void getmat()
  { cout<<"enter th value for n:\n";
    cin>>n;
    cout<<"enter the elements:\n";
    for(i=0;i<n;i++)
    { for(j=0;j<n;j++)
     cin>>a[i][j];
    }
  };
  void display()
  { for(i=0;i<n;i++)
    { for(j=0;j<n;j++)
      cout<<a[i][j]<<"\t";
      cout<<"\n";
    }
  }
friend class B;
};
class B
{
public:
void transpose(A &x)
{ cout<<"the transposed matrix is:\n";
    for(x.i=0;x.i<x.n;x.i++)
   { for(x.j=0;x.j<x.n;x.j++)
     cout<<x.a[x.j][x.i]<<"\t";
     cout<<"\n";
   }
}
};
int main()
{
A x;
x.getmat();
x.display();
B z;
z.transpose(x);
return 0;
}      

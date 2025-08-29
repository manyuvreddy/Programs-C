//program to convert given decimal n to binary
#include<iostream>
using namespace std;
int main()
{
  int r,n,d,q,z,sum;
  cout<<"n = ";
  cin>>n;
  d=2;
  z=1;
  sum=0;
  
  while(n>=2)
  {
    r=n%d;
    q=n/d;
    n=q;
    if(r>=1){
      sum=sum+z;
      z=z*10;
    }
    else if(r==0){
      //sum=sum;
      z=z*10;
    }
  }
  sum=sum+z;
  cout<<sum<<endl;
return 0;
}
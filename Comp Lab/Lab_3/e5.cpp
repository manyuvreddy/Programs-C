//program to print all primes smaller than n
#include<iostream>
using namespace std;
void prime(int x)
{
    int i,r;
    bool s;
    s=true;

    if(x>=2)
  {
    for(i=2;i<x;i++)
    {
    r=x%i;
    if(r==0){
      s=false;
      break;
      }
    }
  if(s==1){
    cout<<"yes, "<<x<<" is prime"<<endl;
    }
  else if(s==0){
    cout<<"no, "<<x<<" is not prime"<<endl;
    }
  }

  else
  {
    cout<<"no, "<<x<<" is not prime"<<endl;
  }
}

int main()
{
    int i,n;
    cout<<"max number to be checked, n = "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        prime(i);
    }
return 0;
}
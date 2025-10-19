//program to check if given n is prime
#include<iostream>
using namespace std;
int main()
{
  int n,i,r;
  bool s;
  s=true;
  cout<<"enter the number, n = ";
  cin>>n;
  
  if(n>=2)
  {
    for(i=2;i<n;i++)
    {
    r=n%i;
    if(r==0){
      s=false;
      break;
      }
    }
  if(s==1){
    cout<<"yes, "<<n<<" is prime"<<endl;
    }
  else if(s==0){
    cout<<"no, "<<n<<" is not prime"<<endl;
    }
  }

  else
  {
    cout<<"no, "<<n<<" is not prime"<<endl;
  }


return 0;
}
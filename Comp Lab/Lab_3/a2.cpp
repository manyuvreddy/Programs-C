//program to verify if given n is an Armstrong number
#include<iostream>
using namespace std;
int main()
{
    int n,n1,i,r,sum;
    cout<<"n = "<<endl;
    cin>>n;
    n1=n;
    sum=0;
    while(n1!=0)
    {
        r=n1%10;
        sum=sum+r*r*r;
        n1=n1/10;
    }
    if(sum==n)
    {
        cout<<"yes, "<<n<<" is an Armstrong number"<<endl;
    }
    else
    {
        cout<<"no, "<<n<<" is not an Armstrong number"<<endl;
    }
return 0;
}
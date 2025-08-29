//program to find sum of given numbers' digits
#include<iostream>
using namespace std;
int main()
{
    int n,r,i,sum;
    cout<<"n = ";
    cin>>n;
    sum=0;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
    }
    cout<<sum<<endl;
return 0;
}
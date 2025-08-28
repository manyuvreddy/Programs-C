//program to find sum of AP series
#include<iostream>
using namespace std;
int main()
{
    int i,a,n,d,sum,x;
    i=0;
    sum=0;
    cout<<"a,n,d of the arithmetic progression is, "<<endl;
    cin>>a;
    cin>>n;
    cin>>d;
    for(i;i<n;i++)
    {
        x=a+i*d;
        cout<<" + "<<x;
        sum=sum+x;
    }
    cout<<" = "<<sum;
return 0;
}
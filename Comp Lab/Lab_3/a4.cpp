//program to find sum of series 1+11+111.....
#include<iostream>
using namespace std;
//only works till n=8, prob due to max memory issues or smtg
int main()
{
    int n,i,x,sum,z;
    z=10;
    cout<<"number of terms in series is ";
    cin>>n;
    sum=0;
    for(i=1;i<=n;i++)
    {
        x=(z-1)/9;
        sum=sum+x;
        z=10*z;
    }
    cout<<sum<<endl;
return 0;
}
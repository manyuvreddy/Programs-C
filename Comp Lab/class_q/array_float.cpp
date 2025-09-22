#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    float a[n],sum=0,mean;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        sum=sum+a[i];
    mean=sum/n;
    cout<<mean<<endl;
return 0;
}
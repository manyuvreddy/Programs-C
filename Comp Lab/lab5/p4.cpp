//count number of even numbers in array
#include<iostream>
using namespace std;
int main()
{
    int i,n,count=0;
    cout<<"n = ";cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            count++;
    }
    cout<<count<<endl;
return 0;
}
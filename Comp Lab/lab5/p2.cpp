//find smallest element in array a
#include<iostream>
using namespace std;
int main()
{
    int i,min,n;
    cout<<"n = ";cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(min>a[i])
            min=a[i];
    }
    cout<<min<<endl;
return 0;
}
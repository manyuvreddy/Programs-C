//finding minimum using recursion
#include<iostream>
using namespace std;

int minelem(int a[], int n)
{
    if(n==0)
        return a[0];
    else if(minelem(a,n-1)<a[n-1])
        return minelem(a,n-1);
    else
        return a[n-1];
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<minelem(a,n)<<endl;
    }
}
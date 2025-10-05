//count prime numbers in an array using recursion
#include<iostream>
using namespace std;

bool prime(int n)
{
    int i;bool status=0;
    if(n>=2)
    {
        status=1;
        for(i=2 ; i<=(n+1)/2 ; i++)
        {
            if(n%i==0)
            {status=0;break;}
        }
    }
    return status;
}

int countprimes(int a[], int n)
{
    if(n==1)
        return prime(a[0]);
    else if(prime(a[n-1])==1)
        return countprimes(a,n-1)+1;
    else
        return countprimes(a,n-1);
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<countprimes(a,n)<<endl;
    }
}
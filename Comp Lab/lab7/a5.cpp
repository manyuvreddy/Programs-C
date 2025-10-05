//check if an array is sorted(ascending order)
#include<iostream>
using namespace std;

int maxelem(int a[], int k)//max elem of arr a till kth index
{
    if(k==0)
        return a[0];
    else if(a[k]>maxelem(a, k-1))
        return a[k];
    else
        return maxelem(a, k-1);
}

bool issorted(int a[], int k)
{
    int i, state=1;
    for(i=0;i<=k;i++)
    {
        if(maxelem(a,i)==a[i])
            state=state*1;
        else
            {state=0;break;}
    }
    return state;
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
        cout<<issorted(a,n-1)<<endl;
    }
}
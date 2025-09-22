// i rows, last i char of ith row are all i, but rest are all 1
#include<iostream>
using namespace std;

int ith(int i, int n)
{
    int j;
    for(j=1;j<=n-i;j++)
    {
        cout<<"1 ";
    }
    for(j=n-i+1;j<=n;j++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
return 0;
}

int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    ith(i,n);
return 0;
}
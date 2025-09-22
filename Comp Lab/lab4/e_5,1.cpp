// alternating pattern of 1s and 0s (1010101) in one line and (0101010) in the next for k lines; each line has k characters
#include<iostream>
using namespace std;

int ith(int i, int n)
{
    int j,t=n/2;
    if(i%2==1)
    {
        for(j=1;j<=t;j++)
        {
            cout<<"10";
        }
        if(n%2==0)
        cout<<endl;
        else
        cout<<"1"<<endl;
    }
    else
    {
        for(j=1;j<=t;j++)
        {
            cout<<"01";
        }
        if(n%2==0)
        cout<<endl;
        else
        cout<<"0"<<endl;
    }
return 0;
}

int main()
{
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        ith(i,n);
    }
return 0;
}
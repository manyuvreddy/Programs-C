// 1
// 2 4
// 3 5 6
//generalised to n lines
#include<iostream>
using namespace std;

int ith(int i, int n)
{
    int j,t,delta;
    delta=n-1;
    t=i;
    for(j=1;j<=i;j++)
    {
        cout<<t<<" ";
        t=t+delta;
        delta--;
    }
    cout<<endl;
return 0;
}

int main()
{
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++)
    ith(i,n);
return 0;
}
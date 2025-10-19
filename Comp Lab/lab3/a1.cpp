//program to write first 10 rows of multiplication tables
#include<iostream>
using namespace std;
int main()
{
    int n,i,p;
    cout<<"n = "<<endl;
    cin>>n;
    p=0;
    i=1;
    for(i;i<=10;i++)
    {
        p=p+n;
        cout<<n<<" * "<<i<<" = "<<p<<endl;
    }
return 0;
}
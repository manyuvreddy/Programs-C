// given n number of people, list out all ordered pairs of possible handshakes
#include<iostream>
using namespace std;
int main()
{
    int n,i,a,count;
    cout<<"n = ";
    cin>>n;
    count=0;
    for(i=1;i<n;i++)
    {
        for(a=i+1;a<=n;a++)
        {
            count++;
            cout<<count<<". ("<<i<<","<<a<<")"<<endl;
        }
    }
return 0;
}
//list out all ways to distribute n identical items into 3 different boxes
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"n = ";
    cin>>n;
    for(i=0;i<=n;i++)
    {   
        for(j=n-i;i+j<=n and j>=0;j--){
            cout<<"( "<<i<<" , "<<n-i-j<<" , "<<j<<" )"<<endl;
        }
    }
return 0;
}
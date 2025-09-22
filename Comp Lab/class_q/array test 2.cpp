//program to check if sum of any two elements in an array add up to k
#include<iostream>
using namespace std;
int main()
{
    int k,a[5],i,j;
    bool val=0;
    cin>>k;
    for(i=0;i<=4;i++)
        cin>>a[i];
    for(i=0;i<=4;i++)
    {
        for(j=i+1;j<=4;j++){
            if(a[i]+a[j]==k){
                cout<<"yes, "<<a[i]<<" + "<<a[j]<<endl;
                val=1;
                break;
            }
       }
    }
}
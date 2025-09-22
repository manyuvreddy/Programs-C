//trial of arrays; to check smallest number in an array
#include<iostream>
using namespace std;
int main()
{
    int i,n,min;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    min=a[0];
    for(i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<min<<endl;
return 0;
}
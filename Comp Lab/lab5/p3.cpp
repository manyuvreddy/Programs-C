//calculate sum of vectors of n dimensions
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"vectors are of dimension n = ";cin>>n;
    int vctA[n],vctB[n],vctR[n];
    cout<<"vctA input "<<endl;
    for(i=0;i<n;i++)
        cin>>vctA[i];
        cout<<"vctB input "<<endl;
    for(i=0;i<n;i++)
        cin>>vctB[i];
    for(i=0;i<n;i++)
        vctR[i]=vctA[i]+vctB[i];
    cout<<"( ";
    for(i=0;i<n;i++)
    {
        cout<<vctR[i]<<" ";
    }
    cout<<" )"<<endl;
return 0;
}
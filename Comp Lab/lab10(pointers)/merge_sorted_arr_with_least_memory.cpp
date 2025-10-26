//note : does not work.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int m;
    cin>>m;
    int b[m];
    for(int i=0; i<m; i++)
        cin>>b[i];


    int i=0, j=0;
    while(a[n-1]>b[j])//taking a to be the smaller array
    {
        if(a[i]<b[i])
        {
            int temp;
            temp=a[i];
            a[i]=b[i];
            b[i]=temp;
            i++;
        }
        else if(a[i]>=b[i])
        {
            j++;
        }
        if(i==n)
            i=0;
    }
    for(i=0; i<n; i++)
        cout<<a[i]<<' ';
    for(i=0; i<m; i++)
        cout<<b[i]<<' ';
}
//arrange elements in ascending order
#include <iostream>
using namespace std;
int main()
{
    int i,j,n,min,max,minindex,maxindex;
    cout<<"n = ";cin>>n;
    int a[n],b[n]={0};
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    min=a[0];
    minindex=0;
    max=a[0];

    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
            maxindex=i;
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]<min){
                min=a[j]; //set a variable to save index of j for minimum here
                minindex=j;
            }
        }
        b[i]=min;
        a[minindex]=max+1;
        min=max+1;
    }
    for(i=0;i<n;i++)
        cout<<b[i]<<" ";
return 0;
}
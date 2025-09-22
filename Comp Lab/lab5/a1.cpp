//to calculate mode in array
#include <iostream>
using namespace std;
int main()
{
    int i,j,n,sum=0,mode;
    float mean, median;
    cout<<"n = ";cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    

    for(i=0;i<n;i++)// mean
        sum=sum+a[i];
    mean=float(sum)/n;
    cout<<"mean is "<<mean<<endl;

    for(i=0;i<n;i++)// median, arranging array in ascending order first
    {
        int minval=a[i],minindex=i,t;
        for(j=i;j<n;j++){
            if(minval>a[j]){
                minval=a[j];
                minindex=j;
            }
        }
        t=a[i];a[i]=minval;a[minindex]=t;
    }
    if(n%2==1)
        median=a[(n+1)/2];
    else
        median=(float)a[n/2]/2+(float)a[(n/2)-1]/2;
    cout<<"median is "<<median<<endl;

    for(i=0;i<n;i++)// mode, calculating max frequency and printing
    {
        int count=0;
        for(j=i;j<n;j++){
            if(a[j]==a[i])
                count++;
        }
        b[i]=count;
        count=0;
    }
    int maxcount=0;
    for(i=0;i<n;i++)
    {
        if(maxcount<b[i])
            maxcount=b[i];
    }
    cout<<"modal values is/are ";
    for(i=0;i<n;i++){
        if(b[i]==maxcount)
            cout<<a[i]<<" ";
    }
    cout<<endl;    

return 0;
}
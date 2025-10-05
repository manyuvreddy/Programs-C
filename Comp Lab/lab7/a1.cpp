#include<iostream>
using namespace std;

int minelemind(int a[], int low, int high)
{
    int min=a[low],minind=low,i;
    for(i=low;i<=high;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            minind=i;
        }
    }
    return minind;
}

void swap(int a[], int low, int high)
{
    int temp;
    temp=a[low];a[low]=a[high];a[high]=temp;
}

void sort(int a[], int low, int high)
{
    for(int i=low;i<high;i++)
        swap(a, i, minelemind(a, i, high));
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n, i;cin>>n;
        int low, high;cin>>low>>high;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a, low, high);

        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
}
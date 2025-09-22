//function to have array of n elements and to print n choose r for all possible pair of elements
#include<iostream>
using namespace std;

int factorial(int n)
{
    int p=1,i;
    for(i=1;i<=n;i++)
        p=p*i;
return p;
}

int ncr(int n, int r)
{
return factorial(n)/(factorial(r)*factorial(n-r));
}

int main()
{
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<"( "<<a[j]<<" , "<<a[i]<<" )"<<endl;
        }
    }
return 0;
}
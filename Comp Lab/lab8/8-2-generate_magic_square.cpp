// generate a magic square of order n(odd)
#include<iostream>
using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n][n]={0};
        int x=n*n;
        int r=0, c=(n-1)/2;
        int i=1;

        while(i<=x)
        {
            if(a[r%n][c%n]==0)
            {
                a[r%n][c%n]=i;
                i++;
                r--;
                c++;
            }
            else
            {
                r++;
            }
        }

        for(int y=0; y<n; y++)
        {
            for(int x=0; x<n; x++)
                cout<<a[y][x]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
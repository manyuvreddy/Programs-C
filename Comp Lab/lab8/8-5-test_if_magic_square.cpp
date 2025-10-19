// prog to test if inputed 2d arr forms a magic square
#include<iostream>
using namespace std;

int column(int a[][100], int n, int column)
{
    int sum=0;
    for(int i=0; i<n; i++)
        sum+=a[i][column];
    return sum;
}
int row(int a[][100], int n, int row)
{
    int sum=0;
    for(int i=0; i<n; i++)
        sum+=a[row][i];
    return sum;
}
int diag(int a[][100], int n, int state)
{
    int sum=0;
    if(state==0)
    {
        for(int i=0; i<n; i++)
            sum+=a[i][i];
    }
    else
    {
        for(int i=0; i<n; i++)
            sum+=a[i][n-i-1];
    }
    return sum;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n][100];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cin>>a[i][j];
        }

        int out[2*n+2]={0};
        for(int i=0; i<n; i++)
            out[i]=row(a, n, i);
        for(int i=0; i<n; i++)
            out[i+n]=column(a, n, i);
            out[2*n]=diag(a, n, 0);
            out[2*n+1]=diag(a, n, 1);

        int state=1;
        for(int i=0; i<2*n+2; i++)
        {
            if(out[0]!=out[i])
            {
                state=0;
                break;
            }
        }
        cout<<state<<endl;
    }
    return 0;
}
// program to multiply 2 matrices
#include<iostream>
using namespace std;

void mult(int a[100][100], int b[100][100], int out[100][100],  int r, int c)
{
        int sum=0;
        for(int i=0; i<100;i++)
        {
                sum=a[r][i]*b[i][c] + sum;
        }
        out[r][c]=sum;
}

int main()
{
        int t;cin>>t;
        while(t--)
        { 
                int n; cin>>n;

                int r, c;
                int a[100][100], b[100][100], out[100][100]={0};
                for(int i=0;i<n;i++)
                {
                        for(int j=0;j<n;j++)
                                cin>>a[i][j];
                }
                for(int i=0; i<n; i++)
                {
                        for(int j=0; j<n; j++)
                                cin>>b[i][j];
                }

                for(r=0;r<n;r++)
                {
                        for(c=0;c<n;c++)
                                mult(a, b, out, r, c);
                }

                for(int i=0; i<n;i++)
                {
                        for(int j=0;j<n;j++)
                                cout<<out[i][j]<<" ";
                        cout<<endl;
                }
        }
        return 0;
}


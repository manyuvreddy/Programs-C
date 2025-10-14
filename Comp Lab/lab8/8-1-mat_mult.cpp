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
                int p, q, r;
	        cin>>p>>q>>r;

	        int row, column;
	        int a[100][100], b[100][100], out[100][100]={0};
	        for(int i=0;i<p;i++)
	        {
		        for(int j=0;j<q;j++)
			        cin>>a[i][j];
	        }
	        for(int i=0; i<q; i++)
	        {
		        for(int j=0; j<r; j++)
			        cin>>b[i][j];
	        }

	        for(row=0;row<p;row++)
	        {
		        for(column=0;column<r;column++)
			        mult(a, b, out, row, column);
	        }

	        for(int i=0; i<p;i++)
	        {
		        for(int j=0;j<r;j++)
			        cout<<out[i][j]<<" ";
		        cout<<endl;
	        }
        }
        return 0;
}

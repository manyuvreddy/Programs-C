// prog to def func that adds 2 mat nd keeps result in C, r rows and c columns in each mat
#include <iostream>
using namespace std;

void add(int a[][100], int b[][100], int C[][100], int r, int c)
{
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
			C[i][j] = a[i][j] + b[i][j];
	}
}

int main()
{
	int t;
	cout<<"test cases : ";
	cin>>t;
	while(t--)
	{
		int r, c;
		cout<<"rows and columns : ";
		cin>>r>>c;
		int a[r][100], b[r][100], C[r][100]={0};

		for(int i=0; i<r; i++)
		{
			cout<<i<<" th row : ";
			for(int j=0; j<c; j++)
				cin>>a[i][j];
		}
		for(int i=0; i<r;i++)
		{
			cout<<i<<" th row : ";
			for(int j=0; j<c; j++)
				cin>>b[i][j];
		}

		add(a, b, C, r, c);

		for(int i=0; i<r; i++)
		{
			for(int j=0; j<c; j++)
				cout<<C[i][j]<<" ";
			cout<<endl;
		}
	}
	return 0;
}
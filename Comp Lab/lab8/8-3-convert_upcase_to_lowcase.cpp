//given  list of n words, prog converts first letter of each word
#include<iostream>
using namespace std;

void convert(char a[][100], int row)
{
	if(a[row][0]>='a' && a[row][0]<='z')
		a[row][0]-=32;
	else if(a[row][0]>='A' && a[row][0]<='Z')
		a[row][0]+=32;
}

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n, i;
		cin>>n;
		char list[n][100];
		for(i=0; i<n; i++)
			cin>>list[i];
		for(i=0; i<n; i++)
			convert(list, i);
		for(i=0; i<n; i++)
			cout<<list[i]<<endl;
	}
}
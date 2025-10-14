// given n words, arrange them in dictionary order
#include<iostream>
#include<string.h>
using namespace std;

int minlength(char a[], char b[])
{
	int i,j;
	for(i=0; a[i]!='\0'; i++){}
	for(j=0; b[j]!='\0'; j++){}
	
	if(i>j) return j;
	else return i;
}

int laterword(char a[][100], int x, int y)//returns true if a comes after b in a dictionary
{
	int i=0, s=0;
	while(i<minlength(a[x],a[y]))
	{
		if(a[x][0]<a[y][0])
		{	s=0;break;}
		else if(a[x][0]>a[y][0])
		{	s=1;break;}
		else
			i++;
	}
	if(i==minlength(a[x], a[y]))
	{
		if(a[x][i]!='\0')
			s=1;
	}
	return s;
}

void swap(char a[][100], int i, int j)
{
	char t[100];
	strcpy(t, a[i]);
	strcpy(a[i], a[j]);
	strcpy(a[j], t);
}

int minwordindex(char a[][100], int i, int j)
{
	char minword[100];
	strcpy(minword, a[i]);

	int minindex=i;
	for(int k=i; k<=j; k++)
	{
		if(laterword(a, i, k)==1)
		{
			minindex=k;
			strcpy(minword, a[k]);
		}
	}
	return minindex;
}

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		char list[n][100];
		
		int i;
		for(i=0; i<n; i++)
			cin>>list[i];
		for(i=0; i<n; i++)
		{
			//t[][100]int j=minwordindex( lis , i, n-1);
			swap(list, i, minwordindex(list, i, n-1));
		}

		for(i=0; i<n; i++)
			cout<<list[i]<<endl;
	}
	return 0;
}
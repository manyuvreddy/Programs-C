// given n words, arrange them in dictionary order
#include<iostream>
//#include<string.h>
using namespace std;

void strcpy(char a[], char b[])
{
    for(int i=0; i<100; i++)
        a[i]=b[i];
}

int strcmp(char a[], char b[])
{
    int s=0;
    int i=0;
    while(i<=minlen(a, b))
    {
        if(a[i]<b[i])
            return -1;
        else if(a[i]>b[i])
            return 1;
        else
            i++;
    }
    return s;
}

int minlen(char a[], char b[])
{
    int i, j;
    for(i=0; a[i]!='\0'; i++){}
    for(j=0; b[j]!='\0'; j++){}
    if(i<j)
        return i;
    else
        return j;
}

int minwordindex(char a[][100], int low, int high)
{
    int minwordindex=low;
    char minword[100];
    strcpy(minword, a[low]);

    for(int i=low; i<=high; i++)
    {
        if(strcmp(a[i], minword)==-1)
        {
            strcpy(minword, a[i]);
            minwordindex=i;
        }
    }
    return minwordindex;
}

void swap(char a[][100], int i, int j)
{
    char temp[100];
    strcpy(temp, a[i]);
    strcpy(a[i], a[j]);
    strcpy(a[j], temp);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char a[n][100];
        for(int i=0; i<n; i++)
            cin>>a[i];
        
        for(int i=0; i<n; i++)
        {
            swap(a, i, minwordindex(a, i, n-1));
        }

        for(int i=0; i<n; i++)
            cout<<a[i]<<endl;
    }
    return 0;
}
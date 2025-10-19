#include<iostream>
#include<string.h>

using namespace std;

void swap(char a[][100], int i, int j)
{
    char temp[100];
    strcpy(temp, a[i]);
    strcpy(a[i], a[j]);
    strcpy(a[j], temp);
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
// given array of words, write program to sort them to dictionary array
#include <iostream>
#include <string.h>

using namespace std;

void swap2lines(char a[][100], int i, int j)
{
    char b[100];
    strcpy(b, a[i]);
    strcpy(a[i], a[j]);
    strcpy(a[j], b);
}

int minlength(char a[], char b[])
{
    int i, j;
    for(i=0; a[i]!='\0'; i++){}
    for(j=0; b[j]!='\0'; j++){}
    
    if(i>j)
        return j;
    else
        return i;
}

int compare2words(char a[], char b[])
{
    int i=0, v=0;
    while(v==0 && i<minlength(a,b))
    {
        if(a[i]<b[i]){
            v = 1; break;}
        else if(a[i]>b[i]){
            v = -1; break;}
        else
            i++;
    }
    if(i==minlength(a,b))
    {
        if(a[i]=='\0' && b[i]!='\0'){
            v=1;}
        else if(a[i]!='\0' && b[i]=='\0'){
            v=-1;}
        else
            v=0;
    }
    return v;
}

int indexofmin(int b[], int i, int j)
{
    int minindex=i;
    for(int k=i; k<=j; k++)
    {
        int max=b[i];
        if(b[k]>max)
        {
            max=b[k];
            minindex=k;
        }
    }
    return minindex;
}

int dictionary(char a[], char b[])//returns 0 if a is before or same as b, 1 if a is after b
{
    int i=0, v=0;
    while(i<minlength(a,b))
    {
        if(a[i]<b[i]){
            v = 0; break;}
        else if(a[i]>b[i]){
            v = 1; break;}
        else
            i++;
    }
    if(i==minlength(a,b))
    {
        if(a[i]!='\0')
            v=1;
    }
    return v;
}

int main()
{
    int n; cin>>n;// n is the number of total words in dictionary
    int b[n]={0}, c[n], i, j;
    char a[n][100], out[n][100];// 100 is max length of each word
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    for(i=0; i<n;i++)
    {
        for(j=0; j<n; j++)
            b[i] = b[i] + dictionary(a[i], a[j]);
    }
    
    for(i=0;i<n;i++)
        cout<<b[i]<<" "<<a[i]<<endl;

    for(i=0;i<n;i++){
        c[i] = indexofmin(b, i, n-1);
        cout<<c[i];
    }

    for(i=0;i<n;i++)
    {
        strcpy(out[i], a[c[i]]);
        cout<<out[i]<<endl;
    }

    //for(i=0;i<n;i++)
    //cout<<out[i]<<endl;
}

// compare a, b (words), return -1 - a occurs before b, 1 - a occurs after b.
#include <iostream>
#include <string.h>

using namespace std;

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

int comp(char a[], char b[])// returns 1, 0, -1 based on 3 cases of comparision between 2 words
{
    int i=0, v=0;
    while(v==0 && i<minlength(a,b))
    {
        if(a[i]<b[i]){
            v = 1; return v; break;}
        else if(a[i]>b[i]){
            v = -1; return v; break;}
        else
            i++;
    }
    if(i==minlength(a,b))
    {
        if(a[i]=='\0' && b[i]!='\0'){
            v=1; return 1;}
        else if(a[i]!='\0' && b[i]=='\0'){
            v=-1; return -1;}
        else
            return 0;
    }
    return 0;
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
    char a[100], b[100];
    cin>>a>>b;
    cout<<dictionary(a,b);
}
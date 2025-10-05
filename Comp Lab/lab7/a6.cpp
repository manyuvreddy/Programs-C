//find length of string using recursion
#include<iostream>
#include<string.h>
using namespace std;

int indexoflastelement(char s[])
{
    int i;
    for(i=0;s[i]!='\0';i++){}
    return i;
}

int lengthofstring(char s[], int n)
{
    int i,k=indexoflastelement(s);
    if(k>1)
        return lengthofstring(s,k-1)+1;
    else
        return 1;
}

int main()
{
    char s[1000];
    cin>>s;
    cout<<lengthofstring(s,indexoflastelement(s))<<endl;

    return 0;
}
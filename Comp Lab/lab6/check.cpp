#include<iostream>
using namespace std;

int length(char a[])
{
    int i;
    for(i=0;a[i]!='\0';i++){}
    return i;
}

int main()
{
    char a[100];
    cin>>a;
    int la;
    la=length(a);
    cout<<la;
}
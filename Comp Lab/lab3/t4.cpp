//program to print given number in reverse order
#include<iostream>
using namespace std;
int main()
{
    int n,r,i;
    cout<<"n = ";
    cin>>n;
    while(n!=0)
    {
        r=n%10;
        cout<<r;
        n=n/10;
    }
    return 0;
}
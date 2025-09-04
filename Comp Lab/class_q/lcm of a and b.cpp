// this is a program to find the lcm of 2 numbers a and b
#include<iostream>
using namespace std;
int main()
{
    int a,b,i,r,k;
    cout<<"a and b are = ";
    cin>>a>>b;
    //cin>>b;
    r=b;
    while(r%a!=0){
        r=r+b;
    }
    cout<<r<<endl;
return 0;
}
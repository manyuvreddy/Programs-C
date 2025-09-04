//program to output GCD(x,y)
#include <iostream>
using namespace std;
int lcm(int a, int b)
{
    int i,r;
    r=b;
    while(r%a!=0){
        r=r+b;
    }
return r;
}

int gcd(int a, int b)
{
    int gcd;
    gcd=a*b/lcm(a,b);
    cout<<gcd<<endl;
return 0;
}
int main()
{
    int x,y;
    cout<<"x,y = ";
    cin>>x>>y;
    gcd(x,y);
return 0;
}
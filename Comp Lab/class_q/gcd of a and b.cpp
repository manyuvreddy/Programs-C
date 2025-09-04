//gcd = a*b/lcm(a,b)
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
    int a,b;
    cout<<"a,b = ";
    cin>>a>>b;
    gcd(a,b);
return 0;
}
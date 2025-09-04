//program to calc x^y using power function from math library
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int z,x,y;
    cout<<"x^y. x, y = ";
    cin>>x>>y;
    z=pow(x,y);
    cout<<z<<endl;
return 0;
}
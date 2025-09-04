//x^y, but user defined function
#include<iostream>
using namespace std;

float power(float x, int y)//x^y , y>=0
{
    int i;
    float p;
    p=1/x;
    for(i=0;i<=y;i++){
        p=p*x;
    }
return p;
}

int main()
{
    int b;
    float a,z;
    cout<<"a,b = ";
    cin>>a>>b;
    z=power(a,b);
    cout<<z<<endl;
return 0;
}
//program to compute remainder when x divides y (x<y) without using % operator
#include<iostream>
using namespace std;

int remainder(int y, int x)//(y/x)
{
     while(y>=0){
        y=y-x;
    }
return x+y;
}

int main()
{
    int x,y,z;
    cout<<"(y/x), y,x = ";
    cin>>y>>x;
    z=remainder(y,x);
    cout<<z<<endl;
return 0;
}
//program to test if a given number is a kaprekar number or not
//kaprekar numbers are numbers whose squares can be split into two parts whose sums will be equal to the same number,ex:45
//45^2= 2025, 2025=>20+25=45
#include<iostream>
using namespace std;

bool kaprekar(int n)
{
    int i,r,k,x,y,z,p;
    bool statement;
    statement=false;
    x=n*n;
    z=0;
    p=1;
    while(x!=0){        //n=>y+z
        r=x%10;
        x=x/10;
        z=r*p+z;
        p=p*10;
        if(x+z==n){
            statement=true;
            break;
        }
    }
return statement;
}

int main()
{
    int n,i;
    cout<<"n = ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(kaprekar(i)==true){
            cout<<i<<" yes"<<endl;
        }
    }
return 0;
}
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

bool isprime(int i)
{
    int j,r;
    bool statement;
    statement=true;
    if(i<2){
        statement=false;
    }
    else{
        for(j=2;j<i;j++){
            r=i%j;
            if(r==0){
                statement=false;
                break;
            }
        }
    }
return statement;
}

int main()
{
    int n,i;
    bool a;
    cout<<"n = ";
    cin>>n;
    if(kaprekar(n)==1)
    {
        for(i=1;i<=n;i++){
            if(isprime(i)==1){
                cout<<i<<endl;
            }
        }
    }
    else{
        cout<<n<<" is not a kaprekar number"<<endl;
    }
return 0;
}
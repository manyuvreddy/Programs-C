//program to print all prime no.s from 1 to n using functions
#include<iostream>
using namespace std;

bool prime(int n)
{
    bool s;
    int i,r;
    s=true;
    if(n>=2)
    {
        for(i=2;i<n;i++){
            r=n%i;
            if(r==0){
                s=false;
                break;
            }
            else{
                s=true;
            }
        }
    }
    else
    {
        s=false;
    }
    if(s==true){
        cout<<n<<endl;
    }
return s;
}

int main()
{
    int n,i;
    cout<<"n = ";
    cin>>n;
    for(i=1;i<=n;i++){
        prime(i);
    }
return 0;
}
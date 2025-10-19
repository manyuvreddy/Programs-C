//given n,k; program to find reversed last k digits of n
#include<iostream>
using namespace std;
int main()
{
    int n,k,i,r,x,n1,n2;
    cout<<"n and k are "<<endl;
    cin>>n;
    cin>>k;
    x=0;
    i=1;
    n1=n;
    n2=0;
    
    while(n1!=0){
        n1=n1/10;
        n2++;
    }

    if(n2>=k)
    {
        while(n!=0)
        {
            r=n%10;
            cout<<r;
            n=n/10;
            i++;
            if(i==k+1){        
                break;
            }
        }
    }
    else
    {
        cout<<"error"<<endl;
    }

return 0;
}
//find final sum of series 1!+2!+3!+.... for n terms
#include<iostream>
using namespace std;
int factorial(int n)
{
    int i,p;
    p=1;
    for(i=1;i<=n;i++){
        p=p*i;
    }
return p;
}
int main()
{
    int sum,n,i;
    cout<<"n = ";
    cin>>n;
    sum=0;
    for(i=1;i<=n;i++){
        sum=sum+factorial(i);
    }
    cout<<sum<<endl;
return 0;
}
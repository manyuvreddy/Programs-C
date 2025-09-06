//program to print pascal's triangles
#include<iostream>
using namespace std;
int factorial(int n)
{
    int i, p;
    p=1;
    if(n>=1){
        for(i=1;i<=n;i++){
            p=p*i;
        }
    }
return p;
}
int ncr(int n, int r)
{
    int z;
    z=factorial(n)/(factorial(r)*factorial(n-r));
return z;
}
int ith_line(int n, int i)
{
    int j;
    for(j=1;j<n;j++){
        cout<<" ";
    }
    for(j=1;j<=i+1;j++){
        cout<<ncr(i+1,j)<<" ";
    }
    cout<<endl;
return 0;
}

int main()
{
    int n,i;
    cout<<"n = ";
    cin>>n;
    for(i=1;i<n;i++){
        cout<<" ";
    }
    cout<<"1"<<endl;
        for(i=1;i<n;i++){
        ith_line(n,i);
    }
return 0;
}
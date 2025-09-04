//similar to a2.cpp, but with * , and being decreasing in size
#include<iostream>
using namespace std;
int ith_line(int i,int n)
{
    int j;
    for(j=1;j<=i;j++){
        cout<<" ";
    }
    for(j=0;j<=n-i;j++){
        cout<<"* ";
    }
    cout<<endl;
return 0;
}

int main()
{   
    int n,i;
    cout<<"n = ";
    cin>>n;
    for(i=1;i<=n;i++){
        ith_line(i,n);
    }
return 0;
}
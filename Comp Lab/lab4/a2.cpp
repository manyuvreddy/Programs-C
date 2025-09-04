//program to print first i natural no's in ith row for n rows
#include<iostream>
using namespace std;

int ith_line(int i)
{
    int j;
    for(j=1;j<=i;j++){
        cout<<" "<<j;
    }
    cout<<endl;
    return 0;
}

int main()
{
    int n,i;
    cout<<"n = ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        ith_line(i);
    }
return 0;
}
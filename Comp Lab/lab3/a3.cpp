//program to read n numbers and print their sum
#include<iostream>
using namespace std;
int main()
{
    int n,i,sum,t1;
    cout<<"total number of integers you want to add is = ";
    cin>>n;
    sum=0;
    i=1;
    while(i<=n)
    {
        cin>>t1;
        sum=sum+t1;
        i++;
    }
    cout<<sum<<endl;
return 0;
}
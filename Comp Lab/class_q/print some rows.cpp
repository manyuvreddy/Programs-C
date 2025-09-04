//for given n, print n rows, in which i th row has i number of (*) (basically, increasing number of elements in each row)
#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"n = ";
    cin>>n;
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=j;i++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
return 0;
}
//given array A and number x, does there exist (a,b)$belong to$ A | a+b=x
#include<iostream>
using namespace std;
int main()
{
    int i,j,n,x,sum=0,state=0;
    cout<<"n and x = "<<endl;cin>>n>>x;
    int A[n];
    for(i=0;i<n;i++)
        cin>>A[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            sum=A[i]+A[j];
            if(sum==x)
            {
                state=1;
                break;
            }
        }
        if(state==1)
            break;
    }
    if(state==1)
        cout<<"yes, there exists pair a,b in A that add up to x"<<endl;
    else
        cout<<"no, there isn't a pair a,b in A that adds up to x"<<endl;
return 0;
}
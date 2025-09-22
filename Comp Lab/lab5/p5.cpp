//given array and x, is x in array or not
#include<iostream>
using namespace std;
int main()
{
    int i,x,n;
    bool state=false;
    cout<<"n and x are "<<endl;cin>>n>>x;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        if(a[i]==x)
        {
            state=true;
            break;
        }
    if(state==1)
        cout<<"yes, "<<x<<" is in the array"<<endl;
    else
        cout<<"no, "<<x<<" is not in the array"<<endl;
return 0;    
}
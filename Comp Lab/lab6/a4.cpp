// two integers stored as strings should be added
#include<iostream>
using namespace std;

int main()
{
    int k,t;
    cin>>t;
    for(k=0;k<t;k++)
    {
        char a[101],b[101];// 101 as 1 element is required to store '\0' character
        cin>>a>>b;
        int i,na,nb;
        for(i=0;a[i]!='\0';i++){}
        na=i;
        for(i=0;b[i]!='\0';i++){}
        nb=i;

        int s[101]={0},carry,sum;

        if(na>=nb)
        {
            for(i=0;i<nb;i++)// assuming na > nb
            {
                sum=s[100-i]+a[na-1-i]+b[nb-1-i]-2*int('0');
                s[100-i]=(sum)%10;
                s[100-1-i]=s[100-1-i]+sum/10;
            }
            for(i;i<na;i++)
            {
                int carry;
                sum=s[100-i]+a[na-1-i]-int('0');
                s[100-i]=sum%10;
                s[100-1-i]=s[100-1-i]+sum/10;
            }
        }

        else if(na<nb)
        {
            for(i=0;i<na;i++)// assuming na < nb
            {
                sum=s[100-i]+a[na-1-i]+b[nb-1-i]-2*int('0');
                s[100-i]=(sum)%10;
                s[100-1-i]=s[100-1-i]+sum/10;
            }
            for(i;i<nb;i++)
            {
                int carry;
                sum=s[100-i]+b[nb-1-i]-int('0');
                s[100-i]=sum%10;
                s[100-1-i]=s[100-1-i]+sum/10;
            }
        }
        
        for(i=0;s[i]==0 && i<=99;i++){}//cout<<i<<" ";}
        for(i;i<=100;i++)
            cout<<s[i];
        cout<<endl;
    }
    return 0;
}
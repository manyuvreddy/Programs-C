//find all the pythagorean triples whose each member is less than k(say 100)
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,n,count;//a2=b2+c2
    count=0;
    cout<<"n = ";
    cin>>n;
    for(a=1;a<=n;a++)
    {
        for(b=1;b<a;b++)
        {
            for(c=1;c<b;c++)
            {
                if(a*a==b*b+c*c){
                    count++;
                    cout<<count<<". "<<c<<", "<<b<<", "<<a<<" are a pythagorean triple"<<endl;
                }
            }
        }
    }
    cout<<count;
return 0;
}
// given 2 sorted arrays a and b, merge them using dynamically allocating memory

#include <iostream>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *pn;
        pn=&n;
        int *pa;
        pa = new int [*&n];
        for(int i=0; i<*&n; i++)
            cin>>*(pa+i);
        
        int m;
        cin>>m;
        int *pm;
        pm=&m;
        int *pb;
        pb = new int [*pm];
        for(int i=0; i<*pm; i++)
            cin>>*(pb+i);
        
        int i=0, j=0;
        for(int k=0 ; k<*pn+*pm ; k++)
        {
            if(i<*pn && j<*pm)
            {
                if(*(pa+i)<*(pb+j))
                {
                    cout<<*(pa+i)<<' ';
                    i++;
                }
                else if(*(pa+i)>=*(pb+j))
                {
                    cout<<*(pb+j)<<' ';
                    j++;
                }
            }
            else if(i==*pn xor j==*pm)
            {
                if(i==*pn)
                {
                    for(j;j<*pm;j++)
                        cout<<*(pb+j)<<' ';
                }
                else
                {
                    for(i;i<*pn;i++)
                        cout<<*(pa+i)<<' ';
                }
            }
        }
        cout<<endl;
        delete pn;
        delete pm;
        delete[] pa;
        delete[] pb;
    }
    return 0;
}
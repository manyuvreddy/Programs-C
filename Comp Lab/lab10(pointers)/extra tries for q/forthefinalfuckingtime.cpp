#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int *temp = new int;
    *temp = *a;
    *a = *b;
    *b = *temp;
    delete temp;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        // int m, n;
        // cin>>n;
        // int *pn;
        // pn = new int [*(&n)];
        // for(int i=0; i<n; i++)
        //     cin>>*(pn+i);

        // cin>>m;
        // int *pm;
        // pn = new int [*(&m)];
        // for(int i=0; i<n; i++)
        //     cin>>*(pm+i);
        int *pn = new int;
        cin>>*pn;

        int *arraya = new int [*pn-1];
        for(int i=0; i<*pn; i++)
            cin>>*(arraya + i);
        
        int *pm = new int;
        cin>>*pm;

        int *arrayb = new int [*pm-1];
        for(int i=0; i<*pm; i++)
            cin>>*(arrayb + i);

        //all the inputs have been taken by now

        //sanity check
        for(int i=0; i<*pn; i++)
            cout<<*(arraya+i)<<' ';
        for(int i=0; i<*pm; i++)
            cout<<*(arrayb+i)<<' ';
        // for(int i=0; i<*pn; i++)
        //     cout<<*(arraya+i)<<' ';

        int i=0, j=0;
        for(int k=0; k<*pn+*pm; k++)
        {
            if(*(arraya+i) > *(arrayb+j))
            {
                swap(arraya+i, arrayb+j);
                i++;
            }
            else if(*(arraya+i) <= *(arrayb+j))
            {
                swap((arraya+i), (arrayb+j));
                j++;
            }
        }
    }
    return 0;
}
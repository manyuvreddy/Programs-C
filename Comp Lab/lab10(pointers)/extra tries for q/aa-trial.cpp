#include <iostream>
using namespace std;

void merge(int *a[], int *b[], int *c[], int *n, int *m)
{
    int k=0;
    int j=0, i=0;
    while(i<*n && j<*m)
    {
        if(*(a+i)>*(b+j))
        {
            c[k]=*(b+j);
            k++;
            j++;
        }
        else if(*(a+i)<=*(b+j))
        {
            c[k]=*(a+i);
            k++;
            i++;
        }
    }
    if(i==*n && j<*m)
    {
        for(j ; j<*m ; j++)
        {
            c[k]=*(b+j);
            k++;
        }
    }
    else if(j==*m && i<*n)
    {
        for(i ; i<*n ; i++)
        {
            c[k]=*(a+i);
            k++;
        }
    }
}

int main()
{
    int n;
    int *pn = &n;
    cin>>n;
    int *arraya;
    arraya = new int[*pn];
    for(int i=0; i < *pn; i++)
        cin >> *(arraya + i);

    int m;
    int *pm = &m;
    cin>>m;
    int *arrayb;
    arrayb = new int[*pm];
    for(int i=0; i < *pm ; i++)
        cin >> *(arrayb + i);


    // for(int i=0 ; i< *pn ; i++)
    //     cout<<*(arraya+i)<<' ';
    // for(int i=0 ; i<*pm ; i++)
    //     cout<<*(arrayb+i)<<' ';

    //all values are stored properly
    int *outarray;
    outarray = new int [*pn+*pm];

    merge(&arraya, &arrayb, &outarray, pn, pm);

    for(int i=0; i<n+m; i++)
        cout<<*(outarray+i)<<' ';
}
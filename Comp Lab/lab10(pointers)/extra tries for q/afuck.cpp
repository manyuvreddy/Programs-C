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

void arrange(int *a[], int *b[], int *c[], int *n, int *m)
{
    //int i=(*n)+(*m);
    int i=0, j=0;
    int k=0;
    while(i<*n && j<*m)
    {
        if(*(a+i)>*(b+j))
        {
            *(c+k) = *(b+j);
            k++;
            j++;
        }
        else if(*(a+i)<=*(b+j))
        {
            *(c+k) = *(a+i);
            k++;
            i++;
        }
    }
    if(i==*n xor j==*m)
    {
        if(i==*n)
        {
            for(int z=j; z<*m; z++)
                *(c+z) = *(b+z);
        }
        else if(j==*m)
        {
            for(int z=i; z<*n; z++)
                *(c+z) = *(a+z);
        }
    }
}

void mergeandprint(int *a[], int *b[], int *pn, int *pm)
{
    int i=0, j=0;
    while(i<*pn && j<*pm)
    {
        if(*(a+i)<*(b+j))
        {
            cout<<*(a+i)<<' ';
            i++;
        }
        else if(*(a+i)>=*(b+j))
        {
            cout<<*(b+j)<<' ';
            j++;
        }
    }
    if(i==*pn)
    {
        for(j;j<*pm;j++)
            cout<<*(b+j)<<' ';
    }
    else
    {
        for(i;i<*pn;i++)
            cout<<*(a+i)<<' ';
    }
}

int main()
{
    // int i;

    // int *n = new int; *n = 5;
    // int *a = new int [*n];
    // for(i=0; i<*n; i++)
    //     *(a+i) = i;
    // int *m = new int; *m =4;
    // int *b = new int [*m];
    // for(i=0; i<*m; i++)
    //     *(b+i) = *m-i;

    // int *c = new int [*n + *m];
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

    mergeandprint(&arraya, &arrayb, pn, pm);

    // for(i=0; i<*n; i++)
    //     cout<<*(a+i)<<' ';
    // for(i=0; i<*m; i++)
    //     cout<<*(b+i)<<' ';
}
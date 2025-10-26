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
    //int k=*m + *n;
    for(int k=0 ; k < *n+*m ; k++)
    {
        if(*(a+i)>*(b+j))
        {
            swap(*(a+i), *(b+j));
            i++;
        }
        else if(*(a+i)<=*(b+j))
        {
            j++;
        }
    }    
}

int main()
{
    // int *pn = new int;
    // cin>>*pn;

    // int *arraya = new int [*pn];
    // for(int i=0; i<*pn; i++)
    //     cin>>*(arraya + i);
    
    // // for(int i=0; i<*pn; i++)
    // //     cout<<*(arraya+i)<<' ';

    //     int *pm = new int;
    // cin>>*pm;

    // int *arrayb = new int [*pm];
    // for(int i=0; i<*pm; i++)
    //     cin>>*(arrayb + i);
    
    // // for(int i=0; i<*pm; i++)
    // //     cout<<*(arrayb+i)<<' ';

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


    int *out = new int [*pm+*pn];

    arrange(&arraya, &arrayb, &out, pn, pm);
    for(int i=0 ; i<*pn ; i++)
        cout<<*(arraya+i)<<' ';
    for(int i=0 ; i<*pm ; i++)
        cout<<*(arrayb+i)<<' ';
    
}
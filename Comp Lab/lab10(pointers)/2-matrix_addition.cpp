#include <iostream>
using namespace std;

void addmatrices(int **a, int **b, int *m, int *n)
{
    for(int i=0; i<*m; i++)
    {
        for(int j=0; j<*n; j++)
        {
            *(*(a+i)+j) += *(*(b+i)+j);
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m, n;
        int *pm = &m;//m is the number of rows
        int *pn = &n;//n is the number of columns

        cin>>m>>n;

        int **mata;
        mata = new int *[*pm];
        for(int i=0; i<*pm; i++)
        {
            mata[i] = new int [*pn];
            for(int j=0; j<*pn;j++)
                cin>>*(mata[i]+j);
        }

        int **matb;
        matb = new int *[*pm];
        for(int i=0; i<*pm; i++)
        {
            matb[i] = new int [*pn];
            for(int j=0; j<*pn;j++)
                cin>>*(matb[i]+j);
        }

        addmatrices(mata, matb, &m, &n);

        for(int i=0; i<*pm; i++)
        {
            for(int j=0; j<*pn; j++)
                cout<<*(*(mata+i)+j)<<' ';
            cout<<endl;
        }
        delete[] mata;
        delete[] matb;
    }
    return 0;
}
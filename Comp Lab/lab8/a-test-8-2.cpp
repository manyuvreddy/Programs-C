#include<iostream>
using namespace std;

// int mod(int n, int r)//n%r
// {
//     if(n>=0)
//         return n%r;
//     else
//         return n%r+n;
// }

// void place_and_move(int a[][100], int n, int& r, int& c, int i)
// {
//     //a[y][x]
//     int x, y;
//     y=mod(r, n);
//     x=mod(c, n);

//     a[y][x]=i;
//     if(a[y-1][x+1]==0)
//     {
//         r--;
//         c++;
//     }
//     else
//     {
//         r++;
//     }
// }

//i dont know why the above functions dont work while the one below does

void place(int a[][100], int n, int& r, int& c, int i)
{
    a[r][c]=i;
    if(a[(r-1+n)%n][(c+1)%n]==0)
    {
        r=(r-1+n)%n;
        c=(c+1)%n;
    }
    else
    {
        r=(r+1+n)%n;
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n][100]={0};
        int r=0, c=(n-1)/2;
        for(int i=1; i<=n*n; i++)
        {
            place(a, n, r, c, i);
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cout<<a[i][j]<<' ';
            cout<<endl;
        }
    }
    return 0;
}
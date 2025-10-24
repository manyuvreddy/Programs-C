// 2 merged arrays given, merge them into 1 sorted arrays
//m, m spaced integers(sorted), n, n spaced sorted integers
//print merged array in 1 line with spaced integers

//method 1 - out[m+n], a[n+1], a[n]=max(a[n-1], b[m-1])+1 and so is b[m+1]; regular merge
// method 2 - out[m+n], a[n], b[m], once a, or b elements get finished, just put b, or a elements without comparision


// method 1

#include <iostream>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n;
        int a[n+1];

        for(int i=0; i<n; i++)
            cin>>a[i];

        cin>>m;
        int b[m+1];
        for(int i=0; i<m; i++)
            cin>>b[i];
        
        if(a[n-1]>=b[m-1])
        {
            a[n]=a[n-1]+1;
            b[m]=a[n];
        }
        else
        {
            a[n]=b[m-1]+1;
            b[m]=a[n];
        }
        
        //int out[m+n];
        int j=0, k=0;
        for(int i=0; i<m+n; i++)
        {
            if(a[j]>=b[k])
            {
                cout<<b[k]<<' ';
                k++;
            }
            else
            {
                cout<<a[j]<<' ';
                j++;
            }
        }

        //for(int i=0; i<m+n; i++)
        //    cout<<out[i]<<' ';
        cout<<endl;
    }
    return 0;
}

//method 2 -- note - i havent verified if this works

// #include <iostream>
// using namespace std;

// int main()
// {
//     int t; cin>>t;
//     while(t--)
//     {
//         int n, m;
//         cin>>n;
//         int a[n];
//         for(int i=0; i<n; i++)
//             cin>>a[n];
//         cin>>m;
//         int b[m];
//         for(int i=0; i<m; i++)
//             cin>>b[m];
        
//         int j=0, k=0, i=0;
//         for(i=0; i<m+n; i++)
//         {
//             if(j<n && k<m)
//             {
//                 if(a[j]<b[k])
//                 {
//                     cout<<a[j]<<' ';
//                     j++;
//                 }
//                 else
//                 {
//                     cout<<b[k]<<' ';
//                     k++;
//                 }
//             }

//             else if (j==n || k==m)
//                 break;
//             // else if(j=n)
//             // {
//             //     cout<<b[k]<<' ';
//             //     k++;
//             // }
//         }
//         if(j==n && i!=m+n)
//         {
//             for(k; k<m; k++)
//                 cout<<b[k]<<' ';
//         }
//         else if(k==m && i!=m+n)
//         {
//             for(j; j<n; j++)
//                 cout<<a[j]<<' ';
//         }
//     }
//     return 0;
// }
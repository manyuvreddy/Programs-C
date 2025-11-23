// total ways to reach say (2, 3) from (0, 0) if you can only move up or right or smtg like that

#include<iostream>
using namespace std;

int noOfWays(int m, int n)
{
    if(m==0 && n==0)
        return 1;
    else if(m==0 xor n==0)
    {
        if(m>n)
            return noOfWays(m-1, n);
        else
            return noOfWays(m, n-1);
    }
    else
        return noOfWays(m-1, n)+noOfWays(m, n-1);
}

int main()
{
    int m, n;
    cin>>m>>n;
    cout<<noOfWays(m, n);
    return 0;
}
//sum of digits of a large integer
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,k;
    cin>>t;
    for(k=1;k<=t;k++)
    {
        char a[100];
        cin>>a;
        int i,sum=0;
        for(i=0;a[i]!='\0';i++)
            sum=sum+int(a[i])-int('0');
        cout<<sum<<endl;
    }

    return 0;
}
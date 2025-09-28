//count number of small capital and digits in the string
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        char a[128];
        cin>>a;
        int s=0,c=0,d=0,i;
        for(i=0;a[i]!='\0';i++)
        {
            if(int(a[i])>=int('a') && int(a[i])<=int('z'))
                s++;
            else if(int(a[i])>=int('A') && int(a[i])<=int('Z'))
                c++;
            if(int(a[i])>=int('0') && int(a[i])<=int('9'))
                d++;
        }
        cout<<s<<" "<<c<<" "<<d<<" "<<i<<endl;
    }
    return 0;
}

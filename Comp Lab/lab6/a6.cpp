//remove spaces and new line from given paragraph
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int k,t;
    cin>>t;
    cin.ignore();
    for(k=0;k<t;k++)
    {
        char a[300];
        int i;
        cin.getline(a,300);
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]!=' ' && a[i]!='\n')
                cout<<a[i];
        }
        
    }
return 0;
}
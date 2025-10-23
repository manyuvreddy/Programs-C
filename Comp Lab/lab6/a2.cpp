//compare words (dictionary order)
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int minlength(char a[], char b[])
{
    int i, j;
    for(i=0; a[i]!='\0'; i++){}
    for(j=0; b[j]!='\0'; j++){}
    if(i<j)
        return i;
    else
        return j;
}

int strcompare(char a[], char b[])
{
    int i=0;
    while(i<=minlength(a, b))
    {
        if(a[i]>b[i])
            return -1;
        else if(a[i]<b[i])
            return 1;
        else
            i++;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[128],b[128];
        cin>>a;
        cin>>b;

        cout<<strcompare(a, b)<<endl;
    }
    return 0;
}
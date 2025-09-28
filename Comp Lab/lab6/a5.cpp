//check if given strings are pangrams(contain all letters of the alphabet)
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
int main()
{
    int k,t;
    cin>>t;
    cin.ignore();
    for(k=0;k<t;k++)
    {
    char a[300];
    int i,s[26]={0};
    cin.getline(a,300);
    for(i=0;a[i]!='\0';i++)
    {
        if(int(a[i])>='A' && int(a[i])<='Z')
            s[int(a[i])-'A']++;
        else if(int(a[i])>='a' && int(a[i])<='z')
            s[int(a[i])-'a']++;
    }

    int state=1;
    for(i=0;i<26;i++)
    {
        if(s[i]==0)
        {
            state=0;
            break;
        }
    }
    if(state==0)
        cout<<0<<endl;
    else
        cout<<1<<endl;
    }
return 0;
}
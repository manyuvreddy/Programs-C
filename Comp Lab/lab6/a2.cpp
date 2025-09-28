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
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,k;
    cin>>t;
    for(k=1;k<=t;k++)
    {
        char a[128],b[128];
        cin>>a;
        cin>>b;
        int i,j,v=0;
        for(i=0;a[i]!='\0' || b[i]!='\0';i++)
        {
            if(int(a[i])>int(b[i]))
            { 
                v=1;
                break;
            }
            else if(int(a[i])<int(b[i]))
            {
                v=-1;
                break;
            }
            else
                v=0;
        }
        for(i=0;a[i]!='\0';i++){}
        for(j=0;b[j]!='\0';j++){}
        if(v==0)
        {
            if(i>j)
                v=1;
            else if(i<j)
                v=-1;
            else
                v=0;
        }
        cout<<v<<endl;
    }
    return 0;
}
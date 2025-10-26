#include <iostream>
#include <string.h>
using namespace std;

bool search(char *names[], char word[], int n)
{
    bool s=0;
    for(int i=0; i<n; i++)
    {
        if(strcmp(word, names[i])==0)
        {
            s=1;
            break;
        }
    }
    return s;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *pn;
        pn=&n;

        char **names;
        names = new char *[*pn];
        for(int i=0; i<*pn; i++)
        {
            names[i] = new char [100];
            cin>>names[i];
        }
        char word[100];
        cin>>word;
        cout<<search(names, word, n)<<endl;
        
        for(int i=0; i<*pn; i++)
            delete[] names[i];
        delete[] names;
    }
    return 0;
}
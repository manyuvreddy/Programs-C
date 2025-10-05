//count occurences of word in sentence
#include<iostream>
#include<string.h>

using namespace std;

int lengthofword(char w[])
{
    int i;
    for(i=0;w[i]!='\0';i++){}
    return i;
}

bool checkword(char s[], char w[], int i)// check if w is in s at index i
{
    bool state=0;
    if(s[i]==w[0])
    {
        state=1;
        for(int k=1;k<lengthofword(w);k++)
        {
            if(s[i+k]!=w[k])
            {state=0;break;}
        }
    }
    return state;
}

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        char s[1000], w[1000];
        cin.getline(s,1000);
        //cin.ignore();
        cin>>w;
        cin.ignore();
        int i,count=0;
        for(i=0;s[i]!='\0';i++)
        {
            if(checkword(s,w,i)==1)
                count++;
        }
        cout<<count<<endl;
    }
}
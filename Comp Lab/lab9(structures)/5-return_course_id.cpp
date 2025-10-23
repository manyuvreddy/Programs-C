// table of course id and course name is given, course id is inputted, output course name, if not present error

#include <iostream>
#include <string.h>
using namespace std;

struct course
{
    int id;
    char name[100];
};

int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        course courses[n];
        for(int i=0; i<n; i++)
        {
            cin>>courses[i].id;
            cin.ignore();
            cin.getline(courses[i].name, 100);
        }
        int reqcourseid;
        cin>>reqcourseid;

        int i;
        for(i=0; i<n; i++)
        {
            if(reqcourseid == courses[i].id)
            {
                cout<<courses[i].name<<endl;
                break;
            }
        }
        if(i==n)
            cout<<"Invalid Course ID"<<endl;
    }
    return 0;
}
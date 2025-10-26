//given list of n students, find number of them having marks greater than 70
//input => n, nlines->roll no, name, marks

#include <iostream>
using namespace std;

struct student
{
    char rollno[100];
    char name[100];
    int marks;
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int *pn; pn = &n;
        cin>>n;
        student *list = new student [*pn];
        //list = new student [n];
        for(int i=0; i<*pn; i++)
        {
            cin>>list[i].rollno;
            cin>>list[i].name;
            cin>>list[i].marks;
        }

        int count=0;
        for(int i=0; i<*pn; i++)
        {
            if(list[i].marks>=70)
                count++;
        }
        cout<<count<<endl;

        // for(int i=0; i<n; i++)
        //     delete[] &list[i];
        delete[] list;
    }
}
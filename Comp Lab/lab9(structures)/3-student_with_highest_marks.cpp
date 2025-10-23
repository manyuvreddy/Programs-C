//find student with highest marks in a course A

#include <iostream>
#include <string.h>
using namespace std;

struct course
{
    int id;
    char name[100];
};

struct student
{
    int id;
    char name[100];
};

struct marks
{
    int studentid;
    int courseid;
    int studentmarks;
};

void printnameofstudent( int a, student b[])
{
    // a is the student id, if a==b[i].id, cour<<b[i].name;
    int i=0;
    while(i>=0)
    {
        if(a==b[i].id)
        { 
            cout<<b[i].name<<endl;
            break;
        }
        i++;
    }
}

int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        course courses[n];
        for(int i=0; i<n; i++)
            cin>>courses[i].id>>courses[i].name;
        
        int m; cin>>m;
        student studentlist[m];
        for(int i=0; i<m; i++)
            cin>>studentlist[i].id>>studentlist[i].name;
        
        int l; cin>>l;
        marks markslist[l];
        for(int i=0; i<l; i++)
            cin>>markslist[i].studentid>>markslist[i].courseid>>markslist[i].studentmarks;
        
        char A[100];        // to get course index from the course name
        cin>>A;
        int courseindex;
        for(int i=0; i<n; i++)
        {
            if(strcmp(courses[i].name, A)==0)
            {
                courseindex=courses[i].id;
                break;
            }
        }

        // to find max marks achieved in the course A
        int maxmarks=-1;// assuming marks cannot be negative
        for(int i=0; i<l; i++)
        {
            if(markslist[i].courseid==courseindex && markslist[i].studentmarks > maxmarks)
            {
                    maxmarks=markslist[i].studentmarks;
            }
        }

        //cout<<maxmarks<<endl;

        // to find and print names of all students who achieved max marks in the particular course
        for(int i=0; i<l; i++)
        {
            if(markslist[i].studentmarks==maxmarks && markslist[i].courseid==courseindex)
            {
                printnameofstudent(markslist[i].studentid, studentlist);
            }
        }
    }
    return 0;
}
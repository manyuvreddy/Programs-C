// first, n, number of courses, next n lines -> course id (int), course name (string)
// next m(number of students), next m lines -> student id(int), course id(int), marks
// next line has string of a course A

// output, number of students that have taken course A

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
    int courseid;
    int marks;
};

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        course courses[n];
        for(int i=0; i<n; i++)
            cin>>courses[i].id>>courses[i].name;

        int m; cin>>m;
        student studentinfo[m];
        for(int i=0; i<m; i++)
            cin>>studentinfo[i].id>>studentinfo[i].courseid>>studentinfo[i].marks;

        char required_course[100];  // to get course id from course name
        int required_course_id;
        cin>>required_course;
        for(int i=0; i<n; i++)
        {
            if(strcmp(required_course, courses[i].name)==0)
                required_course_id=courses[i].id;
        }

        int count=0;//it is the number of students that have taken a particular course (assuming that same student cannot take same course twice (duh))
        for(int i=0; i<m; i++)
        {
            if(studentinfo[i].courseid==required_course_id)
                count++;
        }

        cout<<count<<endl;
    }
    return 0;
}
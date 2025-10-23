//Write a program to compute the maximum height of a student in an array of nrecords, where each student 
//record consists of the student's roll number and height, both are of integer data type.

// t test cases, in each test case, first input is integer n, denoting number of students,
// next n lines consist of 2 space separated integers, denoting students' roll no and height.
// output, print roll no and height (space separated, each test case in new line).

#include<iostream>
using namespace std;

struct studentinfo
{
    int roll_no;
    int height;
};

int indexofmax(int a[], int n)
{
    int max=a[0], maxindex=0;
    for(int i=0; i<n; i++)
    {
        if (max < a[i])
        {
            max=a[i];
            maxindex=i;
        }
    }
    return maxindex;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int rollno[n], height[n];
        for(int i=0; i<n; i++)
        {
            cin>>rollno[i]>>height[i];
        }

        int tallest=indexofmax(height, n);
        cout<<rollno[tallest]<<' '<<height[tallest]<<'\n';
    }
    return 0;
}
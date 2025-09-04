// program to read marks of student and output grade as follows:
//90+ :-S
//80+ :-A
//70+ :-B (70-79)
#include<iostream>
using namespace std;
int main()
{
    float marks;
    cout<<"The marks of the student is : ";
    cin>>marks;
    if(marks>=0 and marks<=100)
    {
        if(marks>=90){
            cout<<"S"<<endl;
        }
        else if(marks>=80){
            cout<<"A"<<endl;
        }
        else if(marks>=70){
            cout<<"B"<<endl;
        }
        else if(marks>=60){
            cout<<"C"<<endl;
        }
        else if(marks>=50){
            cout<<"D"<<endl;
        }
        else if(marks>=40){
            cout<<"E"<<endl;
        }
        else if(marks<=40){
            cout<<"F"<<endl;
        }
    }
    else
    {
        cout<<"The input marks are erroneous"<<endl;
    }
return 0;
}
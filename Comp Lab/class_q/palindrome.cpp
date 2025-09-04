//program to check if a given n is a palindrome(ex. 123467764321)
#include<iostream>
using namespace std;
int reverse(int n)//excludes trailing zeroes, which cannot form palindromes anyway
{
    int r,z,i,n2;
    z=1;
    n2=0;
    while(n!=0){
        r=n%10;
        n=n/10;
        n2=10*n2+r;
    }
    cout<<n2<<endl;
    return n2;
}
// int main()
// {
//     int n,reversed;
//     cin>>n;
//     reversed=reverse(n);
//     //cout<<n2;
//     //cout<<n2<<"  "<<n;
//     if(n==reversed){
//     cout<<"yes "<<n<<" is a palindrome"<<endl;
//     }
// return 0;
// }
char palindrome_check(int n)
{
    int n2;
    n2=reverse(n);
    if(n==n2){
        return 'y ';
    }
    else{
        return 'n';
    }
}
int main()
{
    int n;
    char a;
    cin>>n;
    a=palindrome_check(n);
    cout<<a<<endl;
return 0;
}
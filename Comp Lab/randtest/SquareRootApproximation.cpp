// approximate square root of n to a steps using herons approximation (aka newtons method)(iterative, guess2 = guess1 + n/guess1, guess2=guess1)

#include<iostream>
using namespace std;

float squareRoot(int n, int steps)
{
    float g1=1, g2;
    for(int i=0; i<steps; i++)
    {
        g1 = (g1 +  n/g1)/2;
    }
    return g1;
}

int main()
{
    int n, steps;
    cin>>n;
    cin>>steps;
    cout<<squareRoot(n, steps)<<endl;
    return 0;
}
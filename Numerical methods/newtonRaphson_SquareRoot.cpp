#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void AprxSquareRoot(float &R, float &x, float &xn)
{
    xn = 0.5*(x+(R/x));
}


int main()
{
    float x, xn,fx, R;
    int iters;
    cout<<"Enter the value for square root: "<<endl;
    cin>>R;
    cout<<"Enter the initial value: "<<endl;
    cin>>x;
    cout<<"Total iterations: "<<endl;
    cin>>iters;
    for (int i=0; i<=iters; i++)
    {
        AprxSquareRoot(R, x, xn);
        x = xn;
        cout<<"Squar root of "<<R<<" is: "<<xn<<endl;
    }
}
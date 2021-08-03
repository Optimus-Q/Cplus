#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void Equation(float &x, float &fx, float &fofx)
{
    fx = pow(x, 3)+3*x-3;
    fofx = 3*pow(x, 2)+3;
}

void NewtonRaphsonAprx(float &xo, float &xn, float &fx, float &fofx)
{
    xn = xo - (fx/fofx);
}

int main()
{
    float xo, xn, fx, fofx, delta;
    int iters;
    cout<<"Enter the initial value: "<<endl;
    cin>>xo;
    cout<<"Total iterations: "<<endl;
    cin>>iters;
    for (int i=0; i<=iters; i++)
    {
        Equation(xo, fx, fofx);
        NewtonRaphsonAprx(xo, xn, fx, fofx);
        delta  = fx-0.0;
        xo = xn;
        cout<<delta<<" "<<xn<<endl;
    }

}
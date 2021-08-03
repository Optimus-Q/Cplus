#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void AprxCubeRoot(float &R, float &x, float &xn)
{
    xn = (1.0/3.0)*(2*x+(R/pow(x,2)));
}


int main()
{
    float x, xn,fx, R;
    int iters;
    cout<<"Enter the value for cube root: "<<endl;
    cin>>R;
    cout<<"Enter the initial value: "<<endl;
    cin>>x;
    cout<<"Total iterations: "<<endl;
    cin>>iters;
    for (int i=0; i<=iters; i++)
    {
        AprxCubeRoot(R, x, xn);
        x = xn;
        cout<<"Cube root of "<<R<<" is: "<<xn<<endl;
    }
}
#include <iostream>
#include <vector>
#include <cmath>
#include <tuple>

using namespace std;

tuple <double, double> get_roots(double a, double b, double c)
{
    if (a==0)
    {
        cout<<"Roots not available";
    }
    else
    {
        double bs = b*b-4*a*c;
        if (bs<0)
        {
            cout<<"Roots not available";
        }
        else if (bs>=0)
        {
           double x1 = (-b+sqrt(bs))/(2*a);
           double x2 = (-b-sqrt(bs))/(2*a);
           return make_tuple(x1,x2);
        }
    }
}


int main()
{
    double a;
    double b;
    double c;
    double x1, x2;
    cout<<"Roots for the ax^2+bx+c=0 form"<<endl;
    cout<<"Ente the value for a: "<<endl;
    cin>>a;
    cout<<"Ente the value for b: "<<endl;
    cin>>b;
    cout<<"Ente the value for c: "<<endl;
    cin>>c;
    tie(x1,x2) = get_roots(a,b,c);
    cout<<x1<<" "<<x2;
    return 0;
}



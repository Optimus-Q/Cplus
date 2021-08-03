#include<iostream>
#include<vector>
#include<array>
#include<cmath>

using namespace std;


float Equation(float &X)
{
    //pow(X, 3)+pow(X, 2)+pow(X, 1)+7;
    float fox = pow(X, 3)-5*X+3;
    return (fox);
}


void FirstRange(float &xoP, float &xfP, float &xoN, float &xfN, float &xo, float &xf)
{
    string checkerP = "False";
    string checkerN = "False";
    string checker = "False";
    float fx_1_pos, fx_2_pos, fx_1_neg, fx_2_neg, eqn;
    eqn = 0.0;
    while (checker=="False")
    {
        fx_1_pos = Equation(xoP);
        fx_2_pos = Equation(xfP);
        fx_1_neg = Equation(xoN);
        fx_2_neg = Equation(xfN);
        if ((fx_1_pos > 0.0) && (fx_2_pos < 0.0))
        {
            checkerP = "True";
        }
        else if ((fx_1_pos < 0.0) && (fx_2_pos > 0.0))
        {
            checkerP = "True";
        }
        else
        {
            xoP = xoP + 1.0;
            xfP = xfP + 1.0;
        } 

        if ((fx_1_neg > 0.0) && (fx_2_neg < 0.0))
        {
            checkerN = "True";
        }
        else if ((fx_1_neg < 0.0) && (fx_2_neg > 0.0))
        {
            checkerN = "True";
        }
        else
        {
            xoN = xoN - 1.0;
            xfN = xfN - 1.0;
        } 
        if ((checkerP=="True") && (checkerN=="False"))
        {
            checker = "True";
            xo = xoP;
            xf = xfP;
        }
        else if ((checkerN=="True") && (checkerP=="False"))
        {
            checker = "True";
            xo = xoN;
            xf = xfN;
        }
        else if ((checkerN=="True") && (checkerP=="True"))
        {
            checker = "True";
            xo = xoP;
            xf = xfP;
        }
    }
}


void BestAprxValue(float &xo, float &xf, float &x)
{
    string startiter = "Yes";
    float fx_0, fx_1, xnew, fx, delt;
    while(startiter=="Yes")
    {
        fx_0 = Equation(xo);
        fx_1 = Equation(xf);
        xnew = ((xo*fx_1)-(xf*fx_0))/(fx_1-fx_0);
        fx = Equation(xnew);
        delt = fx-0.0;
        cout<<"Delt: "<<delt<<" "<<"X: "<<xnew<<endl;
        if (fx<0)
        {
            xo = xo + 0.001;
        }
        else if (fx>0)
        {
            xf = xf + 0.001;
        }

        if (abs(delt) <0.1)
        {
            startiter="No";
            x = xnew;
        }
    }
}
int main()
{
    float xo, xf, xoP, xfP, xoN, xfN, x;
    xo = 0.0;
    xf = 0.0;
    xoP= 1.0;
    xoN = -1.0;
    xfP = 2.0;
    xfN = -2.0;
    FirstRange(xoP, xfP, xoN, xfN, xo, xf);
    BestAprxValue(xo, xf, x);
    cout<<x;

}

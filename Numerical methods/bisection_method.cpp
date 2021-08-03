#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


float Equation(float &x)
{
    float fx;
    fx = pow(x, 3)+3*x-3;
    return fx;
}

float MidInterval(float &a, float &b)
{
    float c;
    c = (a+b)/2.0;
    return c;
}

void IntervalRange(float &a, float &b, float &IA, float &IB)
{
    string checker = "False";
    float fx_1, fx_2, start_iter;
    vector<float>braks;
    braks.push_back(a);
    braks.push_back(b);
    for (int v=0; v<braks.size()-1; v++)
    {
        start_iter = braks[v];
        if (start_iter>0.0)
        {
            for (float i=1; i<=start_iter; i++)
            {
                for (float j=1; j<=start_iter; j++)
                {
                    if (i!=j)
                    {
                        fx_1 = Equation(i);
                        fx_2 = Equation(j);
                        if ((fx_1>0.0) && (fx_2<0.0))
                        {
                            checker = "True";
                            IA = i;
                            IB = j;
                            break;
                        }
                        else if ((fx_1 <0.0) && (fx_2>0.0))
                        {
                            checker = "True";
                            IA = i;
                            IB = j;
                            break;
                        }
                    }
                }
                if (checker=="True");
                {
                    break;
            break;
            }
            }
        }
        else if (start_iter<0.0)
        {
            for (float i=1; i<=start_iter; i++)
            {
                for (float j=1; j<=start_iter; j++)
                {
                    if (i!=j)
                    {
                        fx_1 = Equation(i);
                        fx_2 = Equation(j);
                        if ((fx_1>0.0) && (fx_2<0.0))
                        {
                            checker = "True";
                            IA = i;
                            IB = j;
                            break;
                        }
                        else if ((fx_1 <0.0) && (fx_2>0.0))
                        {
                            checker = "True";
                            IA = i;
                            IB = j;
                            break;
                        }
                    }
                }
                if (checker=="True");
                {
                    break;
            break;
            }
            }
        }
        }
        
    }
      
void IntervalReplacer(float &IA,float &IB, float &c, float &fx)
{
    float fx_1, fx_2, fx_c;
    fx_1 = Equation(IA);
    fx_2 = Equation(IB);
    fx_c = Equation(c);
    fx = fx_c;
    if ((fx_1 < 0.0) && (fx_c > 0.0))
    {
        IB = c;
    }
    else if ((fx_1 > 0.0) && (fx_c < 0.0))
    {
        IB = c;
    }
    else if ((fx_2 < 0.0) && (fx_c > 0.0))
    {
        IA = c;
    }
    else if ((fx_2 > 0.0) && (fx_c < 0.0))
    {
        IA = c;
    }
}
int main()
{
    float a, b, IA, IB, mid_c, fx, delta;
    int iters;
    cout<<"The first positve interval a: "<<endl;
    cin>>a;
    cout<<"The second negative interval b: "<<endl;
    cin>>b;
    cout<<"Total iterations: "<<endl;
    cin>>iters;
    IntervalRange(a,b,IA, IB);
    for (int i=0; i<=iters; i++)
    {
        mid_c = MidInterval(IA, IB);
        IntervalReplacer(IA, IB, mid_c, fx);
        delta = fx-0.0;
        cout<<delta<<" "<<mid_c<<endl;
    }
    
    
    
}
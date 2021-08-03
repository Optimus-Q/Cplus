#include <iostream>

using namespace std;

int PBR_P(int &y)
{
    y = y+1;
    cout<<y;
}

int main()
{
    int val = 5;
    PBR_P(val);
    cout<<val;   // by without using the const in the values we changed the value here, we can avoid that using const.
}



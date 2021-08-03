#include <iostream>

using namespace std;

int PBR_P(const int &y)
{
    int x = y+1;
    cout<<x<<endl;
}

int main()
{
    int val = 5;
    PBR_P(val);
    cout<<val;
}


// pointers are good but requires referencing and deferencing explicitly
#include <iostream>

using namespace std;

int PBR_P(int *y)
{
    cout<<*y;
}

int main()
{
    int val = 5;
    PBR_P(&val);
}


// pointers are good but requires referencing and deferencing explicitly
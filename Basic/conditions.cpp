#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){

    //int x = 45, y=78;
    int x,y;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the second number";
    cin>>y;
    if (x>y)
    {
        cout<<"X is greater than Y";
    } 
    else if (x < y)
    {
        cout<<"X is smaller than Y";
    }
    else
    {
    cout<<"Not a number";
    }
}
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
    
    string result = (x>y) ? "X is greater than Y": "X is smaller than Y";
    cout<<result;
}
//Build simple caluclator such that it shows all the operation

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int x,y;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;
    cout<<"Basic calculations using: "<<x<<" and "<<y;
    int addition = x+y;
    cout<<"Addition: "<<addition<<endl;
    int substraction = x-y;
    cout<<"Substraction: "<<substraction<<endl;
    int multiplication = x*y;
    cout<<"Multiplication: "<<multiplication<<endl;
    int division = x/y;
    cout<<"Division: "<<division<<endl;
    int remainder = x%y;
    cout<<"Remainder: "<<remainder<<endl;
    int max_val = max(x,y);
    cout<<"Maximum is: "<<max_val<<endl;
    int min_val = min(x,y);
    cout<<"Minimum is: "<<min_val<<endl;
    

}
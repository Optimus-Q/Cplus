/*datatypes---->int, double, char, string, and bool 
To declare a variable following syntax is used
type variable = values;*/ 

#include <iostream>

using namespace std;

int main(){

    // first variable

    int first_val = 34;
    double second_val = 34.56;
    char name_initial = 'P';    //for char we cannot use double quotes, use single
    string names = "Pankesh";
    bool yes = true;
    int x=5, y=8, z=0;    //multiple declaration

    cout << "Age is= "<< first_val << "Float age is= "<<second_val << "Initial= "<< name_initial <<"text= "<<names<<"boool= "<<yes;


}
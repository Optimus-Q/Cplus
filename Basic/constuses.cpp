/* uses of constant: by using constant we can make the variable value unchanged
    if const int x = 5; then if i change x=9; it will give error because it permanent*/

#include <iostream>
using namespace std;

int main(){
    int x = 5;
    x = 3;
    cout << "case1="<<x;   //it changed, when you re-declare if we use int x=3, it will give error, bcz x is already int, so u dont declare int again

    const int y=5;
    y=9;
    cout<<"case2="<<y; //error

}
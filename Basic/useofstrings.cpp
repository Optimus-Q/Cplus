#include <iostream>
#include <string>

using namespace std;

int main(){
    string name1 = "Hello";
    string name2 = "How are you!!!";
    string greet_metho1 = name1+" "+name2;  //string can be concatenated using +
    string greet_metho2 = name1.append(name2);  //string can be concatenated using append 
    cout<< greet_metho1;
    cout<<greet_metho2;



}
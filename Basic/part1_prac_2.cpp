// practice - Strings 
//http://www.cplusplus.com/reference/string/string/

#include <iostream>
#include<string>

using namespace std;

int main(){

    cout<<"Enter your name: ";
    string name;
    getline(cin, name);
    cout<<"You're name is: "<<name<<endl;
    cout<<"Length of the name: "<<name.length()<<endl;
    cout<<"First character: "<<name[0]<<endl;
    cout<<"Last character: "<<name[name.length()-1]<<endl;

    //copy
    // to copy we have to assign the total length then pass destination to the copy fn
    char newname[name.length()];
    name.copy(newname, name.length()); 
    cout<<"Copied name: "<<newname<<endl;

    //find
    //position of word Melroy
    int findname = name.find("Melroy");
    cout<<"Position: "<<findname;

    //substring
    string subname = name.substr(2, 8);
    cout<<"sbstring is: "<<subname;








}




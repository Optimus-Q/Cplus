#include <iostream>
#include <vector>
#include <list>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    list<int>age_list{20,30,40,50,60,70};
    list<string>name_list{"A", "B", "C", "D", "E","F"};
    list<int>::iterator i;
    int age;
    string name;
    cout<<"Check the age: ";
    cin>>age;
    cout<<"Check the Name: ";
    cin>>name;
    string count = "No";
    for (i=age_list.begin(); i!=age_list.end(); i++)
    {
        if (*i==age)
        {
            count = "Yes";
            cout<<"Age in the record"<<endl;
        }
    }
    if (count=="No")
    {
        age_list.push_back(age);
        name_list.push_back(name);
        cout<<"New record added"<<endl;
    }

    int max_age=0;
    for (i=age_list.begin(); i!=age_list.end(); i++)
    {
        if (*i>max_age)
        {
            max_age = *i;
        }
    }
    cout<<"Maximum age is: "<< max_age;
}
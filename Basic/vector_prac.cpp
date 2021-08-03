// this code shows how we can use the vector to save the values and access them

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string>v1;
    v1.push_back("Melroy");
    v1.push_back("Pereira");

    for (auto a = v1.begin(); a != v1.end(); ++a)    // method 1
    {
        cout << *a;
    }

        for (auto a = 0; a != v1.size(); ++a)      // method 2
    {
        cout << v1[a];
    }

    cout<<v1[0];    // method 3

}
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x;
    int y;
    cout <<"Enter the value: ";
    cin>>x;

    if (x%2==0)
    {
        cout<<x<<" "<<"is even"<<endl; 
    }
    else
    {
        cout<<x<<" "<<"is odd"<<endl;
    }
}
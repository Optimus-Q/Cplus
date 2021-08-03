#include<iostream>
#include<array>
#include<cmath>

using namespace std;

int main()
{
    array <int,5> arr_= {1,2,3,4,5};
    for (int i=0; i<arr_.size(); i++)
    {
        cout<<arr_.at(i)<<endl;                //arr_[i]
    }
} 
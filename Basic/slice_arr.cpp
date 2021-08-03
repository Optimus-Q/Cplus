#include<iostream>
#include<array>
#include<cmath>

using namespace std;

array <int, 5> MySlice(int arr[], int s)
{
    for (int i=0; i<s; i++)
    {
        cout<<arr[i];
    }
}


int main()
{
    int arr_[]= {1,2,3,4,5};
    MySlice(arr_,2);
}
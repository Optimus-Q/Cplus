#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1,2,3,4,5};
    vector<int> v1{6,7,8,9,10};
    int j = 5;
    int k = 7;
    cout<< "Second element: "<<v[1]<< endl;
    cout<< "Second element: "<<v.at(1)<<endl;
    cout<< "last element: "<<v.back()<<endl;
    cout<< "last element: "<<v[v.size()-1]<<endl;
    cout<< "Front element: "<<v.front()<<endl;
    swap(j,k);
    cout <<"swap element: "<<j<<k<<endl;
    swap(v,v1);
    cout <<"swap vector 1: "<<v.at(0)<<endl;
    cout<<"swap vector 2: "<<v1.at(0)<<endl;
    v.insert(v.begin(), j); 
    cout<< "Front element: "<<v.front()<<endl;
}

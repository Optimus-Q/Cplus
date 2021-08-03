#include <iostream>
#include <vector>

using namespace std;

void squares(vector<int>&i)
{
    vector<int>v;
    for (int j=0; j<i.size(); j++)
    {
        v.push_back(i[j]*2);
    }   
    //i=v; by writing this equal we also change the original variable values from the reference
    for (int k=0; k<v.size();k++)
    {
        cout<<v[k]<<" "<<endl;
    }
}

int main()
{
    vector<int>values{1,2,3,4,5,6,7,8};
    squares(values);
    for (int u=0; u<values.size(); u++)
    {
        cout<<values[u]<<" ";
    }
    
}
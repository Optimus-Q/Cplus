// store elements in list and vector

# include <iostream>
# include <string>
# include <vector>

using namespace std;

int main()
{
    int start_val;
    cout<< "Enter the first value: ";
    cin >> start_val;

    int end_val;
    cout<<"Enter the second value: ";
    cin >> end_val;

    vector<int>stor_vec;

    for (int i=start_val; i<=end_val; ++i)
    {
        stor_vec.emplace_back(i+50);        // we can use push back/emplace back
    }

    for (int i=0; i!=stor_vec.size();++i)
    {
        cout << stor_vec[i] <<" ";
    }
    

}
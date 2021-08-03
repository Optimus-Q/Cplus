#include <iostream>
#include<cmath>

using namespace std;

void result(int x, int y)
{
    int score = max(x,y);
    cout<<"Max value is: "<<score;

}
//main should retrun int
int main()
{
    int x;
    int y;
    cout<<"ENter the first value ";
    cin>>x;
    cout<<"ENter the Second value ";
    cin>>y; 
    result(x,y); 
    return 0; 
}
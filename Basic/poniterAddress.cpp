//https://www3.ntu.edu.sg/home/ehchua/programming/cpp/cp4_PointerReference.html
#include<iostream>

using namespace std;

int main()
{
    /*int num = 88;
    int *pnum = &num;
    cout<<pnum<<endl;
    cout<<*pnum<<endl;
    *pnum=56;
    cout<<*pnum<<endl;
    //unintitalized pointer for the memory allocation is bad way from coding(but compiler doesn't gives error)
    int * iPtr;
    *iPtr = 55;
    cout << iPtr << endl;
    int *pt = 0;
    cout<<*pt<<endl;*/

    //reference

    int num_ = 89;
    int x = 56;
    int &refnum = num_;
    cout<<num_<<endl;
    cout<<refnum<<endl;
    refnum = x;
    cout<<refnum<<endl;
    cout<<num_<<endl;
}
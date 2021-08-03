#include <array>
#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int matrix_shape = 5;
    int det_grp = matrix_shape-1;
    int totalElements[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    // Grouping loc start
    int matrix_loc = matrix_shape+1;

    vector <int> grps;
    for (int i=matrix_loc; i<matrix_loc+matrix_shape; i++)
    {
        grps.push_back(i);
    }
    int cur_loc;
    int cur_ele_loc;
    vector <int> tempVec;
    for (int i=0; i<grps.size(); i++)
    {
        for (int j=i; j<i+det_grp; j++)
        {
            if ((grps.size()-i)>=det_grp)
            {
                tempVec.push_back(grps[j]);
            }
        }
        
    }
    vector <int> nextGrp;
    for (int i=0; i<grps.size(); i++)
    {   
        if ((i!=0) && (i!=grps.size()-1))
        {
            nextGrp.push_back(grps[i]);
        }
    }  
    for (int i=0; i<nextGrp.size(); i++)
    {
        cout<<nextGrp[i]<<" ";
    }
}
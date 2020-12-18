#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int count =0;
       for(auto i:nums)
       {
           if(i!=val)
            count++;
       }
       return count;
    }
};

int main()
{
    Solution rem;
    vector<int> vect{2,3,3,2,2,2,3};
    cout<<rem.removeElement(vect,3);
}
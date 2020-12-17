#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        set<int> s1;

        for(auto i:nums)
        {
            s1.insert(i);
        }

        nums.assign(s1.begin(), s1.end());

        return nums.size();
    }
};

int main()
{
    Solution duplicate;
    vector<int> vect{1,1,2,3};
    cout<<duplicate.removeDuplicates(vect);

}
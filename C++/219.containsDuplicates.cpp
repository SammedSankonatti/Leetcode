#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        int n = nums.size();

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            if (mp.find(nums[i]) != mp.end() && abs(i - mp[nums[i]]) <= k)
                return true;
            else
                mp[nums[i]] = i;
        }
        return false;
    }
};
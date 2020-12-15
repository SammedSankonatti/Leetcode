#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &num, int target)
{

    int n= num.size();
    vector<int> result;
    // result.push_back(1);
    // result.push_back(2);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(num[i]+num[j]==target)
            {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }

    return result;
}

int main()
{
    int nums[] = { 2, 7, 11, 15 }, target = 9;
    int n= sizeof(nums)/sizeof(nums[0]);

    vector<int> num;
    num.assign(nums,nums+n);

    vector<int> result =twoSum(num, target);

    for(auto i:result)
    {
        cout<<i<<" ";
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int n1=nums1.size(), n2= nums2.size();
        int i=0,j=0;
        vector<int> res(0);
        while(i<n1&& j<n2)
        {
            if(nums1[i]<=nums2[j])
                res.push_back(nums1[i++]);
            else
                res.push_back(nums2[j++]);
        }

       while(i<n1)
       {
           res.push_back(nums1[i++]);
       }
       while(j<n2)
       {
           res.push_back(nums2[j++]);
       }

        int m=res.size();

        // for(auto p:res)
        // {
        //     cout<<p<<" ";
        // }
        
        if(m%2==0)
            return float((res[m / 2] + res[m / 2 - 1]) / 2);
        return res[m/2];
    }
    
};

int main()
{
    vector<int> v1{1,2};
    vector<int>v2{3,4};
    Solution median;
    double res= median.findMedianSortedArrays(v1,v2);
    cout<<res<<endl;

}
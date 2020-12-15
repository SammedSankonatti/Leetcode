#include<bits/stdc++.h>
using namespace std;

vector<int> twoSumBruteForce(vector<int> &num, int target)
{
    int n= num.size();
    vector<int> result;
    
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

void twoSumEfficient(vector<int> &num, int target)
{
    int n= num.size();
    set<int> s;

    for(auto i:num)
    {
        s.insert(target-i);
    }

    for(auto i:num)
    {
        if(s.find(i)!=s.end())
        {
            cout<<"sum exist"<<endl;
            break;
        }
    }   
}

void print(vector<int> &result){
    for (auto i : result)
    {
        cout << i << " ";
    }
}

int main()
{
    int nums[] = { 2, 7, 11, 15 }, target = 9;
    int n= sizeof(nums)/sizeof(nums[0]);

    vector<int> num;
    num.assign(nums,nums+n);

    vector<int> result =twoSumBruteForce(num, target);
    print(result);

    twoSumEfficient(num,target);


    return 0;
}
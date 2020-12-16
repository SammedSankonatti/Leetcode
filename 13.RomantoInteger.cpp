#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int N=0;
        map<char, int> mp;

        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;

        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]>=mp[s[i+1]])
            {
                N+= mp[s[i]]+mp[s[i+1]];
                i++;
            }
            else
            {
                N += abs(mp[s[i]] - mp[s[i + 1]]);
                i++;
            }
        }
    return N;
    }
};

int main()
{
    Solution roman;
    cout<<roman.romanToInt("XLVII");

}
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        int res=0;
        while(x)
        {
            res= res*10+x%10;
            x/=10;
        }

        return res;
    }
};

int main()
{
    Solution rev;
    cout<<rev.reverse(-123);

}
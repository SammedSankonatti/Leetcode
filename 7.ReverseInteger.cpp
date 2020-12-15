#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        long res=0;
        while(x)
        {
            res= res*10+x%10;
            x/=10;
        }

        if(res<=INT_MIN || res>=INT_MAX)
        {
            res=0;
        }

        return res;
    }

    int reverseWithString(int x);
};

int Solution::reverseWithString(int x)
{
    int res=x;
    if(x<INT_MIN || x>INT_MAX)
    {
        return 0;
    }
        
    
    if(x<0)
        res=-res;
    
    string str =to_string(res);
    
    ::reverse(str.begin(),str.end());

    if(x<0)
    {
        str.insert(str.begin(), '-');
    }
    x= stoi(str);

    return x;
}

int main()
{
    Solution rev;
    cout<<rev.reverse(-123);
    cout<<"using string"<<endl;
    cout<<rev.reverseWithString(-456);

}
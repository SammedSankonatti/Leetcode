#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if(x<0)
            return false;
        
        int temp=x;

        string str= to_string(x);
        ::reverse(str.begin(),str.end());
        
        x=stoi(str);

        if(x==temp)
            return true;
        return false;
    }
};

int main()
{

    Solution pal;
    if (pal.isPalindrome(0))
        cout<<"yes palindrome"<<endl;
    else
        cout<<"Not palindrome"<<endl;
}
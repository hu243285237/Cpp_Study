//////////////////////////////////////////////////////////////////////
//  判断一个整数是否是回文数。
//  回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
//////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/palindrome-number/description/
//////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    bool isPalindrome(int x) 
    {
        string s = to_string(x);
        
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] != s[s.length()- 1 - i])
            {
                return false;
            }
        }
        
        return true;
    }
};

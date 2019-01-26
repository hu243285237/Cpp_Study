//////////////////////////////////////////////////////////////////////////////////////
//  给定一个正整数，检查他是否为交替位二进制数：
//  换句话说，就是他的二进制数相邻的两个位数永不相等。
//////////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/binary-number-with-alternating-bits/description/
//////////////////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    bool hasAlternatingBits(int n) 
    {
        string s = "";
        
        while(n)
        {
            string temp = to_string(n % 2);
            s = temp + s;
            n /= 2;
        }
        
        for(int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1]) return false;
        }
        
        return true;
    }
};

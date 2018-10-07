//////////////////////////////////////////////////////////////////////
//  编写一个函数，其作用是将输入的字符串反转过来。
//////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/reverse-string/description/
//////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    string reverseString(string s) 
    {
        string sout;
        
        for (int i = s.size() - 1; i >= 0; i--)
        {
            sout += s[i];
        }
        
        return sout;
    }
};

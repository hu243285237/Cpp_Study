///////////////////////////////////////////////////////////////////////////////
//  给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度。
///////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/explore/interview/card/bytedance/242/string/1012/
///////////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    int lengthOfLongestSubstring(string s) 
    {
        int result = 0, i = 0, j = 0;
        
        set<char> ch;
        
        while (i < s.size() && j < s.size())
        {
            set<char>::iterator iter = ch.find(s[j]);
            if (iter == ch.end())
            {
                ch.insert(s[j++]);
                result = max(result, j - i);
            }
            else
            {
                ch.erase(s[i++]);
            }
        }
        
        return result;
    }
};

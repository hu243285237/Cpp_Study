/////////////////////////////////////////////////////////////////////////////////////
//  给定一个字符串，找到它的第一个不重复的字符，并返回它的索引。如果不存在，则返回 -1。
/////////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/first-unique-character-in-a-string/description/
/////////////////////////////////////////////////////////////////////////////////////

class Solution
{
    public:
    
    int firstUniqChar(string s) 
    {
        unordered_map<char, int> m;
        
        for (char c : s) m[c]++;
        
        for (int i = 0; i < s.size(); i++)
        {
            if (m[s[i]] == 1) return i;
        }
        
        return -1;
    }
};

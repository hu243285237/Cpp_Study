////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  给定一种 pattern(模式) 和一个字符串 str ，判断 str 是否遵循相同的模式。
//  这里的遵循指完全匹配，例如， pattern 里的每个字母和字符串 str 中的每个非空单词之间存在着双向连接的对应模式。...
////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/word-pattern/
////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    bool wordPattern(string pattern, string str) 
    {
        map<string, char> m;
        map<char, bool> pm;
        int index = 0;
        int j = 0;
        string s = "";
        int sum = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == ' ') 
            {
                s = "";
                continue;
            }
            s += str[i];
            if ((i < str.size() - 1 && str[i + 1] == ' ') || (i == str.size() - 1))
            {
                sum++;
                if (!m.count(s)) 
                {
                    while (pm.count(pattern[j])) j++;
                    m.insert(make_pair(s, pattern[j]));
                    pm.insert(make_pair(pattern[j], true));
                }
                if (pattern[index++] != m[s]) return false;
            }
        }
        if (sum != pattern.size()) return false;
        return true;
    }
};

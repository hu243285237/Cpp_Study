//////////////////////////////////////////////////////////////////////
//  给定两个字符串 s 和 t，判断它们是否是同构的。
//  如果 s 中的字符可以被替换得到 t ，那么这两个字符串是同构的。
//  所有出现的字符都必须用另一个字符替换，同时保留字符的顺序。
//  两个字符不能映射到同一个字符上，但字符可以映射自己本身。
//////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/isomorphic-strings/description/
//////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    bool isIsomorphic(string s, string t) 
    {
        map<char, char> ms;
        map<char, char> mt;
        
        for (int i = 0; i < s.size(); i++)
        {
            if (ms.count(s[i]) || mt.count(t[i]))
            {
                if (ms[s[i]] != t[i] || mt[t[i]] != s[i]) return false;
            }
            else
            {
                ms.insert(make_pair(s[i], t[i]));
                mt.insert(make_pair(t[i], s[i]));
            }
        }
        
        return true;
    }
};

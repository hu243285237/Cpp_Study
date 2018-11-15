///////////////////////////////////////////////////////////////////
//  实现 strStr() 函数。给定一个 haystack 字符串和一个 needle 字符串，
//  在 haystack 字符串中找出 needle 字符串出现的第一个位置 (从0开始)。
//  如果不存在，则返回  -1。
///////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/implement-strstr/description/
///////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    int strStr(string haystack, string needle) 
    {
        if (needle == "") return 0;
        if (haystack == "") return -1;
        if (needle.size() > haystack.size()) return -1;
        
        for (int i = 0; i <= haystack.size() - needle.size(); i++)
        {   
            for (int j = 0; j < needle.size(); j++)
            {
                if (needle[j] != haystack[i + j]) break;
                
                if (j == needle.size() - 1) return i;
            }
        }
        
        return -1;
    }
};

//////////////////////////////////////////////////////////////////////
//  给定一个仅包含大小写字母和空格 ' ' 的字符串，返回其最后一个单词的长度。
//  如果不存在最后一个单词，请返回 0 。
//  说明：一个单词是指由字母组成，但不包含任何空格的字符串。
//////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/length-of-last-word/description/
//////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    int lengthOfLastWord(string s) 
    {
        int len = 0;
        
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] != ' ') 
            {
                len++;
            }
            else if (len == 0 && s[i] == ' ')
            {
                continue;
            }
            else
            {
                break;
            }
        }
        
        return len;
    }
};

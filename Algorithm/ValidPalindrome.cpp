//////////////////////////////////////////////////////////////////////////////
//  给定一个字符串，验证它是否是回文串，只考虑字母和数字字符，可以忽略字母的大小写。
//  说明：本题中，我们将空字符串定义为有效的回文串。
//////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/valid-palindrome/description/
//////////////////////////////////////////////////////////////////////////////

class Solution
{
    public:
    
    bool isPalindrome(string s) 
    {
        if (s == "") return true;
        
        int i = 0;
        int j = s.size() - 1;
        
        while (i < j)
        {
            if (isdigit(s[i]) || isalpha(s[i]))
            {
                if (isdigit(s[j]) || isalpha(s[j]))
                {   
                    s[i] = tolower(s[i]);
                    s[j] = tolower(s[j]);
                    
                    if (s[i] == s[j])
                    {
                        i++;
                        j--;
                        continue;
                    }
                    
                    return false;
                }
                else
                {
                    j--;
                }
            }
            else
            {
                i++;
            }
        }
        
        return true;
    }
};

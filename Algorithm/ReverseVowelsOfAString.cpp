//////////////////////////////////////////////////////////////////////////////
//  编写一个函数，以字符串作为输入，反转该字符串中的元音字母。
//////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/reverse-vowels-of-a-string/description/
//////////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    string reverseVowels(string s)
    {
        int head = 0;
        int end = s.size() - 1;
        
        while (head < end)
        {
            if (!judgeChar(s[head])) head++;
            
            if (!judgeChar(s[end])) end--;
            
            if (judgeChar(s[head]) && judgeChar(s[end]))
            {
                char temp = s[head];
                s[head] = s[end];
                s[end] = temp;
                
                head++;
                end--;
            }
        }
        
        return s;
    }
    
    bool judgeChar(char c)
    {        
        return c == 'a' | c == 'e' | c == 'i' | c == 'o' | c == 'u' |
            c == 'A' | c == 'E' | c == 'I' | c == 'O' | c == 'U';
    }
};

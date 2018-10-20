///////////////////////////////////////////////////////////////
//  给定一个单词列表，只返回可以使用在键盘同一行的字母打印出来的单词。
///////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/keyboard-row/description/
///////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    vector<string> findWords(vector<string>& words) 
    {
        vector<string> v;
        
        for (string s : words)
        {
            if (s.size() <= 1)
            {
                v.push_back(s);
            }
            else
            {
                for (int i = 1; i < s.size(); i++)
                {
                    if (GetLine(s[i]) != GetLine(s[i - 1]))
                    {
                        break;
                    }

                    if (i == s.size() - 1)
                    {
                        v.push_back(s);
                    }
                }
            }
        }
        
        return v;
    }
    
    int GetLine(char c)
    {
        if (c == 'Q' || c == 'q' || c == 'W' || c == 'w' || c == 'E' || c == 'e' || c == 'R' || c == 'r' ||
           c == 'T' || c == 't' || c == 'Y' || c == 'y' || c == 'U' || c == 'u' || c == 'I' || c == 'i' ||
           c == 'O' || c == 'o' || c == 'P' || c == 'p')
        {
            return 1;
        }
        else if (c == 'A' || c == 'a' || c == 'S' || c == 's' || c == 'D' || c == 'd' || c == 'F' || c == 'f' ||
           c == 'G' || c == 'g' || c == 'H' || c == 'h' || c == 'J' || c == 'j' || c == 'K' || c == 'k' ||
           c == 'L' || c == 'l')
        {
            return 2;
        }
        else if (c == 'Z' || c == 'z' || c == 'X' || c == 'x' || c == 'C' || c == 'c' || c == 'V' || c == 'v' ||
           c == 'B' || c == 'b' || c == 'N' || c == 'n' || c == 'M' || c == 'm')
        {
            return 3;
        }
    }
};

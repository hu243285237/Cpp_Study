//////////////////////////////////////////////////////////////////////////
//  给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。
//////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/valid-parentheses/description/
//////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    bool isValid(string s)
    {
        stack<char> sc;
        
        for (char c : s)
        {
            if (sc.size() == 0 && (c == ')' || c == ']' || c == '}'))
            {
                return false;
            }
            else if ((c == ')' && sc.top() != '(') || (c == ']' && sc.top() != '[') || (c == '}' && sc.top() != '{'))
            {
                return false;
            }
            else if (c == '(' || c == '[' || c == '{')
            {
                sc.push(c);
            }
            else if ((c == ')' && sc.top() == '(') || (c == ']' && sc.top() == '[') || (c == '}' && sc.top() == '{'))
            {
                sc.pop();
            }
        }
        
        return sc.size() == 0 ? true : false;
    }
};

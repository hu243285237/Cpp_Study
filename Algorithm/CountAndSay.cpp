//////////////////////////////////////////////////////////////////////
//  报数序列是一个整数序列，按照其中的整数的顺序进行报数，得到下一个数。...
//////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/count-and-say/description/
//////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    string countAndSay(int n) 
    {
        string say = "0";
        
        for (int i = 0; i < n; i++)
        {
            say = sayNext(say);
        }
        
        return say;
    }
    
    string sayNext(string last)
    {
        if (last == "0") return "1";
        
        string next = "";
        
        int i = 0;
        char current = last[0];
        
        for (int j = 0; j < last.size(); j++)
        {
            if (current == last[j])
            {
                i++;
            }
            
            if ((j < last.size() - 1 && last[j + 1] != current))
            {
                next += to_string(i) + current;

                current = last[j + 1];
                i = 0;
            }
            else if (j == last.size() - 1)
            {
                next += to_string(i) + current;
            }
        }
        
        return next;
    }
};

/////////////////////////////////////////////////////////////////////
//  给定一个 32 位有符号整数，将整数中的数字进行反转。
/////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/reverse-integer/description/
/////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    int reverse(int x) 
    {
        string s_in = to_string(x);
        
        string s_out;
        
        for (int i = s_in.size() - 1; i >= 0; i--)
        {
            if(s_in[i] == '0' && i == s_in.size() - 1)
            {
                continue;
            }
            
            if(s_in[i] == '-' && i == 0)
            {
                s_out = "-" + s_out;
                
                continue;
            }
            
            s_out += s_in[i];
        }
        
        if (atol(s_out.c_str()) > pow(2,31) - 1 || atol(s_out.c_str()) < -pow(2,31))
        {
            return 0;
        }
        else
        {
            return atoi(s_out.c_str());
        }
    }
};

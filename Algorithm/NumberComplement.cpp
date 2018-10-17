/////////////////////////////////////////////////////////////////////
//  给定一个正整数，输出它的补数。补数是对该数的二进制表示取反。
/////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/number-complement/description/
/////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    int findComplement(int num) 
    {
        int res = 0;
        
        int compare = 1073741824;
        
        bool start = false;
        
        for (int i = 0; i < 31; i++)
        {
            if (!start)
            {
                if (num&compare)
                {
                    start = true;
                }
            }
             
            if (start)
            {
                if (!(num&compare))
                {
                    res = res|compare;
                }
            }
            
            compare = compare >> 1;
        }
        
        return res;
    }
};

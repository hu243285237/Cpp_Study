////////////////////////////////////////////////////////////////////
//  颠倒给定的 32 位无符号整数的二进制位。
////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/reverse-bits/description/
////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    uint32_t reverseBits(uint32_t n) 
    {
        uint32_t res = 0;
        
        for (int i = 0; i < 32; i++)
        {
            if (n&1)
            {
                res = res|1;
            }
            
            if (i != 31)
            {
                res = res << 1;
            
                n = n >> 1;
            }
        }
        
        return res;
    }
};

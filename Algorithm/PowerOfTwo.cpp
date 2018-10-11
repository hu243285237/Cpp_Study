/////////////////////////////////////////////////////////////////////////
//  给定一个整数，编写一个函数来判断它是否是 2 的幂次方。
/////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/power-of-two/description/
/////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    bool isPowerOfTwo(int n) 
    {
        if (n > 0)
        {
            return (log(n) / log(2)) - (int)(log(n) / log(2)) <= 0.000000001f ? true : false;
        }
        else
        {
            return false;
        }
    }
};

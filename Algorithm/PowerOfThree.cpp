/////////////////////////////////////////////////////////////////////////
//  给定一个整数，写一个函数来判断它是否是 3 的幂次方。
/////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/power-of-three/description/
/////////////////////////////////////////////////////////////////////////

class Solution
{
    public:
    
    bool isPowerOfThree(int n)
    {
        if(n == 1)
        {
            return true;
        }
        
        if(n <= 0)
        {
            return false;
        }
        
        while(true)
        {
            if(n == 1)
            {
                return true;
            }
            
            if(n % 3 == 0)
            {
                n /= 3;
            }
            else
            {
                return false;
            }
        }
    }
};

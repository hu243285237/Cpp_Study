/////////////////////////////////////////////////////////////////////////////
//  两个整数之间的汉明距离指的是这两个数字对应二进制位不同的位置的数目。
//  给出两个整数 x 和 y，计算它们之间的汉明距离。
/////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/hamming-distance/description/
/////////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    int hammingDistance(int x, int y)
    {
        int distance = 0;
        
        int i = x^y;
        
        while (i)
        {
            if (i&1)
            {
                distance++;
            }
            
            i = i >> 1;
        }
        
        return distance;
    }
};

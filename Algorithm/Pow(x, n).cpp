////////////////////////////////////////////////////////////////////////
//  实现 pow(x, n) ，即计算 x 的 n 次幂函数。
////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/powx-n/
////////////////////////////////////////////////////////////////////////

class Solution
{
    public:
    
    double myPow(double x, int n) 
    {
        return pow(x, n);
    }
};

/* 会超时
class Solution
{
    public:
    
    double myPow(double x, int n) 
    {
        double res = 1.0;
        for (int i = 0; i < abs(n); i++)
        {
            res *= x;
        }
        return n > 0 ? res : 1 / res;
    }
};
*/

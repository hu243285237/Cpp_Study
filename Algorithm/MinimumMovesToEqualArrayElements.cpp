/////////////////////////////////////////////////////////////////////////////////////////
//  给定一个长度为 n 的非空整数数组，找到让数组所有元素相等的最小移动次数。
//  每次移动可以使 n - 1 个元素增加 1。
/////////////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/minimum-moves-to-equal-array-elements/description/
/////////////////////////////////////////////////////////////////////////////////////////

class Solution
{
    public:
    
    int minMoves(vector<int>& nums) 
    {
        //n-1个数加1等同于1个数减1
        
        int min = INT_MAX;
        
        for (int i : nums)
        {
            if (i < min) min = i;
        }
        
        int sum = 0;
        
        for (int i : nums)
        {
            sum += (i - min);
        }
        
        return sum;
    }
};

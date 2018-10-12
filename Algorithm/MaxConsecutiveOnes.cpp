/////////////////////////////////////////////////////////////////////////
//  给定一个二进制数组， 计算其中最大连续1的个数。
/////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/max-consecutive-ones/description/
/////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        int _max = 0;
        
        int _temp = 0;
        
        for (int i : nums)
        {
            if (i)
            {
                _temp++;
                
                _max = max(_max, _temp);
            }
            else
            {
                _temp = 0;
            }
        }
        
        return _max;
    }
};

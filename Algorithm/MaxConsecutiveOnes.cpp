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
        int max = 0;
        
        int temp = 0;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                temp++;
                
                if (temp > max)
                {
                    max = temp;
                }
            }
            else
            {
                temp = 0;
            }
        }
        
        return max;
    }
};

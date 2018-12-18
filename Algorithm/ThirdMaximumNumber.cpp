////////////////////////////////////////////////////////////////////////
//  给定一个非空数组，返回此数组中第三大的数。如果不存在，则返回数组中最大的数。
//  要求算法时间复杂度必须是O(n)。
////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/third-maximum-number/description/
////////////////////////////////////////////////////////////////////////
//  时间复杂度不是O(n),sorry~
////////////////////////////////////////////////////////////////////////

class Solution
{
    public:
    
    int thirdMax(vector<int>& nums) 
    {
        sort(nums.rbegin(), nums.rend());
        
        if (nums.size() < 3) return nums[0];
        
        int temp = nums[0];
        int index = 1;
        
        for (int i : nums)
        {
            if (temp != i)
            {
                index++;
                temp = i;
                
                if (index == 3) return i;
            }
        }
        
        return nums[0];
    }
};

////////////////////////////////////////////////////////////////////////////////////////////
//  给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
////////////////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/maximum-subarray/description/
////////////////////////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    int maxSubArray(vector<int>& nums) 
    {
        int max = nums[0];
        int n = nums[0];
        
        for (int i = 1; i < nums.size(); i++)
        {
            n = n > 0 ? n + nums[i] : nums[i];
            
            if (n > max) max = n;
        }
        
        return max;
    }
};

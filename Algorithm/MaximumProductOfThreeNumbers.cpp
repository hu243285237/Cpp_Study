/////////////////////////////////////////////////////////////////////////////////////
//  给定一个整型数组，在数组中找出由三个数组成的最大乘积，并输出这个乘积。
/////////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/maximum-product-of-three-numbers/description/
/////////////////////////////////////////////////////////////////////////////////////

class Solution
{
    public:
    
    int maximumProduct(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        
        int m = nums.size() - 1;
        
        int a = nums[m] * nums[m - 1] * nums[m - 2];
        int b = nums[m] * nums[0] * nums[1];
        
        return max(a, b);
    }
};

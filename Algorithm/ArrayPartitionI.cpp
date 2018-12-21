/////////////////////////////////////////////////////////////////////////////////////
//  给定长度为 2n 的数组, 你的任务是将这些数分成 n 对, 
//  例如 (a1, b1), (a2, b2), ..., (an, bn) ，使得从1 到 n 的 min(ai, bi) 总和最大。...
/////////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/array-partition-i/description/
/////////////////////////////////////////////////////////////////////////////////////

class Solution
{
    public:
    
    int arrayPairSum(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        
        int sum = 0;
        
        for (int i = 0; i < nums.size(); i+=2)
        {
            sum += nums[i];
        }
        
        return sum;
    }
};

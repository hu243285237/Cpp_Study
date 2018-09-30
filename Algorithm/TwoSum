////////////////////////////////////////////////////////////////////////
//  给定一个整数数组和一个目标值，找出数组中和为目标值的两个数。
//  你可以假设每个输入只对应一种答案，且同样的元素不能被重复利用。
////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/two-sum/description/
////////////////////////////////////////////////////////////////////////

class Solution
{
    public: 
    
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> v;
        
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = 0; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target && i != j)
                {
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }
        
        return v;
    }
};

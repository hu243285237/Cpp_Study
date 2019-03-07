///////////////////////////////////////////////////////////////////
//  给定一个无重复元素的数组 candidates 和一个目标数 target ，
//  找出 candidates 中所有可以使数字和为 target 的组合。
//  candidates 中的数字可以无限制重复被选取。
//  说明：
//  所有数字（包括 target）都是正整数。
//  解集不能包含重复的组合。 
///////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/combination-sum/description/
///////////////////////////////////////////////////////////////////
//  耗时太长，可以优化
///////////////////////////////////////////////////////////////////

class Solution
{
    public:
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        vector<vector<int>> v;
        vector<int> nums;
        combination(v, candidates, nums, target, 0, 0);
        return v;
    }
    
    void combination(vector<vector<int>>& v, vector<int> candidates, vector<int> nums, int target, int index, int sum)
    {
        if (sum == target) v.push_back(nums);
        if (sum > target) return;
        if (sum < target)
        {
            for (int i = index; i < candidates.size(); i++)
            {
                nums.push_back(candidates[i]);
                combination(v, candidates, nums, target, i, sum + candidates[i]);
                nums.pop_back();
            }
        }
    }
};

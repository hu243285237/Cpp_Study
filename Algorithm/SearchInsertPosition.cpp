/////////////////////////////////////////////////////////////////////////
//  给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。
//  如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
//  你可以假设数组中无重复元素。
/////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/search-insert-position/description/
/////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    int searchInsert(vector<int>& nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target) return i;
        }
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (target < nums[i]) return i;
        }
        
        return nums.size();
    }
};

///////////////////////////////////////////////////////////////////////
//  给定一个数组 nums 和一个值 val，你需要原地移除所有数值等于 val 的元素，
//  返回移除后数组的新长度。...
///////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/remove-element/description/
///////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    int removeElement(vector<int>& nums, int val)
    {
        int res = 0;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[res] = nums[i];
                res++;
            }
        }
        
        return res;
    }
};

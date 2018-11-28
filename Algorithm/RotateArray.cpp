///////////////////////////////////////////////////////////////
//  给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。
///////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/rotate-array/description/
///////////////////////////////////////////////////////////////

class Solution
{
    public:
    
    void rotate(vector<int>& nums, int k) 
    {
        for (int i = 0; i < k; i++)
        {
            nums.insert(nums.begin(), nums.back());
            nums.pop_back();
        }
    }
};

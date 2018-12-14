//////////////////////////////////////////////////////////////////////////////////
//  给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
//////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/move-zeroes/description/
/////////////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    void moveZeroes(vector<int>& nums) 
    {
        int index = 0;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0) swap(nums[index++], nums[i]);
        }
    }
    
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
};

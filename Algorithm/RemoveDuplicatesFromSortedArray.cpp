//////////////////////////////////////////////////////////////////////////////////////////////////
//  给定一个排序数组，你需要在原地删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。...
//////////////////////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/description/
//////////////////////////////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    int removeDuplicates(vector<int>& nums) 
    {
        if (nums.empty())
        {
            return NULL;
        }
        
        for (vector<int>::iterator it = nums.begin(); it != nums.end() - 1;)
        {
            if (*it == *(it + 1))
            {
                nums.erase(it);
            }
            else
            {
                it++;
            }
        }
        
        return nums.size();
    }
};

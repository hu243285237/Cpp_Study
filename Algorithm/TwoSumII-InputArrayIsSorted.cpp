//////////////////////////////////////////////////////////////////////////////////
//  给定一个已按照升序排列 的有序数组，找到两个数使得它们相加之和等于目标数。
//  函数应该返回这两个下标值 index1 和 index2，其中 index1 必须小于 index2。
//  说明: 返回的下标值（index1 和 index2）不是从零开始的。
//  你可以假设每个输入只对应唯一的答案，而且你不可以重复使用相同的元素。
//////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/two-sum-ii-input-array-is-sorted/description/
//////////////////////////////////////////////////////////////////////////////////
//  有空用二分法再做一遍，迭代太耗时间
//////////////////////////////////////////////////////////////////////////////////

class Solution
{
    public:
    
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        vector<int> v;
        
        for (int i = 0; numbers[i] <= target; i++)
        {
            for (int j = i + 1; numbers[i] + numbers[j] <= target; j++)
            {
                if (numbers[i] + numbers[j] == target)
                {
                    v.push_back(i + 1);
                    v.push_back(j + 1);
                    
                    break;
                }
            }
        }
        
        return v;
    }
};

/////////////////////////////////////////////////////////////////////////
//  给定一个整数数组和一个整数 k，判断数组中是否存在两个不同的索引 i 和 j，
//  使得 nums [i] = nums [j]，并且 i 和 j 的差的绝对值最大为 k。
/////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/contains-duplicate-ii/description/
/////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
        map<int, int> m;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (m.count(nums[i]))
            {
                if (abs(i - m[nums[i]]) > k)
                {
                    m[nums[i]] = i;
                }
                else
                {
                    return true;
                }
            }
            else
            {
                m.insert({nums[i], i});
            }
        }
        
        return false;
    }
};

////////////////////////////////////////////////////////////////////////////
//  给定一个包含 n + 1 个整数的数组 nums，其数字都在 1 到 n 之间（包括 1 和 n），
//  可知至少存在一个重复的整数。假设只有一个重复的整数，找出这个重复的数。
////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/find-the-duplicate-number/
////////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    int findDuplicate(vector<int>& nums) 
    {
        unordered_set<int> s;
        
        for (int i : nums)
        {
            if (!s.count(i))
            {
                s.insert(i);
            }
            else
            {
                return i;
            }
        }
        
        return 0;
    }
};

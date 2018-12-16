/////////////////////////////////////////////////////////////////////
//  给定一个整数数组，判断是否存在重复元素。
//  如果任何值在数组中出现至少两次，函数返回 true。
//  如果数组中每个元素都不相同，则返回 false。
/////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/contains-duplicate/description/
/////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    bool containsDuplicate(vector<int>& nums)
    {
        map<int, bool> m;
        
        for (int i : nums)
        {
            if (m.count(i)) 
            {
                return true;
            }
            else
            {
                m.insert(make_pair(i, true));
            }
        }
        
        return false;
    }
};

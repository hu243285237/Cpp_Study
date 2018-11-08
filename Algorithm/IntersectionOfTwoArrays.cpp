//////////////////////////////////////////////////////////////////////////////
//  给定两个数组，编写一个函数来计算它们的交集。...
//////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/intersection-of-two-arrays/description/
//////////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> v;
        
        for (int i : nums1)
        {
            for (int j : nums2)
            {
                if (i == j)
                {
                    vector<int>::iterator it = find(v.begin(), v.end(), i);
                    
                    if (it != v.end())
                    {
                        break;
                    }
                    else
                    {
                        v.push_back(i);
                    }
                }
            }
        }
        
        return v;
    }
};

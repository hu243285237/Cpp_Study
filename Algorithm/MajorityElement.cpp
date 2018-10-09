/////////////////////////////////////////////////////////////////////////////////
//  给定一个大小为 n 的数组，找到其中的众数。众数是指在数组中出现次数大于 ⌊ n/2 ⌋ 的元素。
//  你可以假设数组是非空的，并且给定的数组总是存在众数。
/////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/majority-element/description/
/////////////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    int majorityElement(vector<int>& nums)
    {
        map<int, int> m;
        
        for (int i : nums)
        {
            if (m.count(i))
            {
                m[i]++;
            }
            else
            {
                m.insert(make_pair(i, 1));
            }
        }
        
        int majorityElement;
        int maxSize = 0;
        
        map<int, int>::iterator iter;
        iter = m.begin();
        
        while (iter != m.end())
        {
            if (iter->second > maxSize)
            {
                maxSize = iter->second;
                majorityElement = iter->first;
            }
            
            iter++;
        }
        
        return majorityElement;
    }
};

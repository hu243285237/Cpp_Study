//////////////////////////////////////////////////////////////////////////////////////////
//  在大小为 2N 的数组 A 中有 N+1 个不同的元素，其中有一个元素重复了 N 次。
//  返回重复了 N 次的那个元素。
//////////////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/n-repeated-element-in-size-2n-array/description/
//////////////////////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    int repeatedNTimes(vector<int>& A) 
    {
        set<int> s;
        
        for (int i : A)
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
    }
};

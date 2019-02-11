/////////////////////////////////////////////////////////////////////////////////////////
//  给定一个按非递减顺序排序的整数数组 A，返回每个数字的平方组成的新数组，要求也按非递减顺序排序。
/////////////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/squares-of-a-sorted-array/description/
/////////////////////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    vector<int> sortedSquares(vector<int>& A) 
    {
        vector<int> v;
        
        for (int i : A)
        {
            v.push_back(pow(i, 2));
        }
        
        sort(v.begin(), v.end());
        
        return v;
    }
};

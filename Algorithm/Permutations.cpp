////////////////////////////////////////////////////////////////////////
//  给定一个没有重复数字的序列，返回其所有可能的全排列。
////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/classic/problems/permutations/description/
////////////////////////////////////////////////////////////////////////

class Solution
{
    public:
    
    vector<vector<int>> permute(vector<int>& nums)
    {
        vector<vector<int>> v;
        vector<int> temp;
        ToPermute(v, nums, temp);
        return v;
    }
    
    void ToPermute(vector<vector<int>>& v, vector<int> originNums, vector<int> tempNums)
    {
        if (tempNums.size() == originNums.size())
        {
            v.push_back(tempNums);
            return;
        }
        
        for (int i : originNums)
        {
            if (find(tempNums.begin(), tempNums.end(), i) != tempNums.end()) continue;
            tempNums.push_back(i);
            ToPermute(v, originNums, tempNums);
            tempNums.pop_back();
        }
    }
};

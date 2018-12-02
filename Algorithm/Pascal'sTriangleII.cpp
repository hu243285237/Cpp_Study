//////////////////////////////////////////////////////////////////////
//  给定一个非负索引 k，其中 k ≤ 33，返回杨辉三角的第 k 行。
//////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/pascals-triangle-ii/description/
//////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    vector<int> getRow(int rowIndex) 
    {
        vector<int> lastLine;
        
        for (int i = 1; i <= rowIndex + 1; i++)
        {
            vector<int> v;
            
            for (int j = 0; j < i; j++)
            {
                if (j == 0 || j == i - 1)
                {
                    v.push_back(1);
                }
                else
                {
                    v.push_back(lastLine[j - 1] + lastLine[j]);
                }
            }
            
            lastLine = v;
            
            if (i == rowIndex + 1)  return v;
        }
    }
};

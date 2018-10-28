/////////////////////////////////////////////////////////////////////
//  给定一个非负整数 numRows，生成杨辉三角的前 numRows 行。
/////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/pascals-triangle/description/
/////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> v1;
        
        vector<int> lastLine;
        
        for (int i = 1; i <= numRows; i++)
        {
            vector<int> v2;
            
            for (int j = 0; j < i; j++)
            {
                if (j == 0 || j == i - 1)
                {
                    v2.push_back(1);
                }
                else
                {
                    v2.push_back(lastLine[j - 1] + lastLine[j]);
                }
            }
            
            lastLine = v2;
            
            v1.push_back(v2);
        }
        
        return v1;
    }
};

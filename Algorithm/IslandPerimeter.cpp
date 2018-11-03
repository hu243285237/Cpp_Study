///////////////////////////////////////////////////////////////////
//  给定一个包含 0 和 1 的二维网格地图，其中 1 表示陆地 0 表示水域。...
///////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/island-perimeter/description/
///////////////////////////////////////////////////////////////////

class Solution
{
    public:
    
    int islandPerimeter(vector<vector<int>>& grid)
    {
        int perimeter = 0;
        
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j])
                {
                    perimeter += 4;
                    
                    if (j > 0 && grid[i][j - 1])
                    {
                        perimeter--;
                    }
                    if (j < grid[0].size() - 1 && grid[i][j + 1])
                    {
                        perimeter--;
                    }
                    if (i > 0 && grid[i - 1][j])
                    {
                        perimeter--;
                    }
                    if (i < grid.size() - 1 && grid[i + 1][j])
                    {
                        perimeter--;
                    }
                }
            }
        }
        
        return perimeter;
    }
};

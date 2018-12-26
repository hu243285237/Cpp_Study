///////////////////////////////////////////////////////////////////////////////
//  在 N * N 的网格中，我们放置了一些与 x，y，z 三轴对齐的 1 * 1 * 1 立方体。
//  每个值 v = grid[i][j] 表示 v 个正方体叠放在单元格 (i, j) 上。
//  现在，我们查看这些立方体在 xy、yz 和 zx 平面上的投影。
//  投影就像影子，将三维形体映射到一个二维平面上。
//  在这里，从顶部、前面和侧面看立方体时，我们会看到“影子”。
//  返回所有三个投影的总面积。...
///////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/projection-area-of-3d-shapes/description/
///////////////////////////////////////////////////////////////////////////////

class Solution
{
    public:
    
    int projectionArea(vector<vector<int>>& grid)
    {
        int area = 0;
        
        for (int i = 0; i < grid.size(); i++)
        {
            int max1 = 0, max2 = 0;
            
            for (int j = 0; j < grid.size(); j++)
            {
                if (grid[i][j]) area++;
                
                max1 = max(max1, grid[i][j]);
                max2 = max(max2, grid[j][i]);
            }
            
            area += max1 + max2;
        }
        
        return area;
    }
};

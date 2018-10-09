/////////////////////////////////////////////////////////////////////////////
//  给定一个 n × n 的二维矩阵表示一个图像。将图像顺时针旋转 90 度。
/////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/rotate-image/description/
/////////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    void rotate(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        
        int deleteY = 0;
        
        if (n % 2 == 1)
        {
            deleteY = 1;
        }
        
        for (int y = 0; y < (n / 2.0f) - deleteY; y++)
        {
            for (int x = 0; x < n / 2.0f; x++)
            {
                int temp = matrix[y][x];
                matrix[y][x] = matrix[n - 1 - x][y];
                matrix[n - 1 - x][y] = matrix[n - 1 - y][n - 1 - x];
                matrix[n - 1 - y][n - 1 - x] = matrix[x][n - 1 - y];
                matrix[x][n - 1 - y] = temp;
            }
        }
    }
};

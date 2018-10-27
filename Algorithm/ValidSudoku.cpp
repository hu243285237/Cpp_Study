/////////////////////////////////////////////////////////////////////
//  判断一个 9x9 的数独是否有效。...
/////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/valid-sudoku/description/
/////////////////////////////////////////////////////////////////////

class Solution
{
    public:
    
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        for (int i = 0; i < 9; i++)
        {
            map<char, bool> row, column, grid;
            
            for (int j = 0; j < 9; j++)
            {
                //判断行
                if (board[i][j] != '.')
                {
                    if (row[board[i][j]])
                    {
                        return false;
                    }
                    else 
                    {
                        row[board[i][j]] = true;
                    }
                }
                
                //判断列
                if (board[j][i] != '.')
                {
                    if (column[board[j][i]])
                    {
                        return false;
                    }
                    else 
                    {
                        column[board[j][i]] = true;
                    }
                }
                
                //判断3X3
                int r = i / 3 * 3 + j / 3;
                int c = i % 3 * 3 + j % 3;
                if (board[r][c] != '.')
                {
                    if (grid[board[r][c]])
                    {
                        return false;
                    }
                    else
                    {
                        grid[board[r][c]] = true;
                    }
                }
            }
        }
        
        return true;
    }
};

//////////////////////////////////////////////////////////////////////
//  给定一个二进制矩阵 A，我们想先水平翻转图像，然后反转图像并返回结果。...
//////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/flipping-an-image/description/
//////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            for (int j = 0; j < A.size() / 2.0f; j++)
            {
                int temp = A[i][j];
                A[i][j] = swap(A[i][A.size() - 1 - j]);
                A[i][A.size() - 1 - j] = swap(temp);
            }
        }
        
        return A;
    }
    
    int swap(int i)
    {
        return i == 0 ? 1 : 0;
    }
};

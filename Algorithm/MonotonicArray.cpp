//////////////////////////////////////////////////////////////////////
//  如果数组是单调递增或单调递减的，那么它是单调的。
//  如果对于所有 i <= j，A[i] <= A[j]，那么数组 A 是单调递增的。
//  如果对于所有 i <= j，A[i]> = A[j]，那么数组 A 是单调递减的。
//  当给定的数组 A 是单调数组时返回 true，否则返回 false。
//////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/monotonic-array/description/
//////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    bool isMonotonic(vector<int>& A) 
    {
        bool isMono = true;
        
        for (int i = 0; i < A.size()-1; i++)
        {
            if (A[i] > A[i+1]) {isMono = false; break;}
        }
        
        if (!isMono)
        {
            isMono = true;
            
            for (int i = 0; i < A.size()-1; i++)
            {
                if (A[i] < A[i+1]) {isMono = false; break;}
            }
        }
        
        return isMono;
    }
};

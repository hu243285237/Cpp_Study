///////////////////////////////////////////////////////////////////////////////
//  给定一个非负整数数组 A， A 中一半整数是奇数，一半整数是偶数。
//  对数组进行排序，以便当 A[i] 为奇数时，i 也是奇数；当 A[i] 为偶数时， i 也是偶数。
//  你可以返回任何满足上述条件的数组作为答案。
///////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/sort-array-by-parity-ii/description/
///////////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    vector<int> sortArrayByParityII(vector<int>& A) 
    {
        stack<int> s1;
        stack<int> s2;
        
        for (int i = 0; i < A.size(); i++)
        {
            if (i % 2 == 1 && A[i] % 2 == 0)
            {
                s1.push(A[i]);
            }
            else if (i % 2 == 0 && A[i] % 2 == 1)
            {
                s2.push(A[i]);
            }
        }
        
        for (int i = 0; i < A.size(); i++)
        {
            if (i % 2 == 0 && A[i] % 2 == 1)
            {
                A[i] = s1.top();
                s1.pop();
            }
            else if (i % 2 == 1 && A[i] % 2 == 0)
            {
                A[i] = s2.top();
                s2.pop();
            }
        }
        
        return A;
    }
};

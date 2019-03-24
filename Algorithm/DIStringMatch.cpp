////////////////////////////////////////////////////////////////////////////
//  给定只含 "I"（增大）或 "D"（减小）的字符串 S ，令 N = S.length。
//  返回 [0, 1, ..., N] 的任意排列 A 使得对于所有 i = 0, ..., N-1，都有：
//  如果 S[i] == "I"，那么 A[i] < A[i+1]
//  如果 S[i] == "D"，那么 A[i] > A[i+1]
////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/di-string-match/
////////////////////////////////////////////////////////////////////////////

class Solution
{
    public:
    
    vector<int> diStringMatch(string S)
    {
        vector<int> v;
        int numi = 0, numd = S.size();
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] == 'I') v.push_back(numi++);
            else v.push_back(numd--);
        }
        v.push_back(numd);
        return v;
    }
};

///////////////////////////////////////////////////////////////////////////////////
//  给出 n 代表生成括号的对数，请你写出一个函数，使其能够生成所有可能的并且有效的括号组合。
///////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/generate-parentheses/description/
///////////////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    vector<string> generateParenthesis(int n)
    {
        vector<string> v;
        
        Generate(v, "", n, n);
        
        return v;
    }
    
    void Generate(vector<string>& v, string result, int leftNum, int rightNum)
    {
        if (leftNum == 0 && rightNum == 0) v.push_back(result);
        if (leftNum > 0) Generate(v, result + "(", leftNum - 1, rightNum);
        if (rightNum > leftNum) Generate(v, result + ")", leftNum, rightNum - 1);
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////
//  给定一个字符串 S，返回 “反转后的” 字符串，其中不是字母的字符都保留在原地，而所有字母的位置发生反转。
///////////////////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/reverse-only-letters/
///////////////////////////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    string reverseOnlyLetters(string S) 
    {
        int left = 0, right = S.size() - 1;
        while (left < right)
        {
            while (!isLetters(S[left]) && left < right) left++;
            while (!isLetters(S[right]) && left < right) right--;
            if (isLetters(S[left]) && isLetters(S[right])) swap(S[left++], S[right--]);
        }
        return S;
    }
    
    bool isLetters(char c)
    {
        return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? true : false;
    }
    
    void swap(char& a, char& b)
    {
        char temp = a;
        a = b;
        b = temp;
    }
};

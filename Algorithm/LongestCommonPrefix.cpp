/////////////////////////////////////////////////////////////////////////////////////
//  编写一个函数来查找字符串数组中的最长公共前缀。如果不存在公共前缀，返回空字符串 ""。
/////////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/longest-common-prefix/description/
/////////////////////////////////////////////////////////////////////////////////////

class Solution
{
    public:
    
    string longestCommonPrefix(vector<string>& strs) 
    {
        if (strs.empty())
        {
            return "";
        }
        
        string commonStr;
        
        int minSize = INT_MAX;
        
        for (string s : strs)
        {
            if (s.size() < minSize)
            {
                minSize = s.size();
            }
        }
        
        for (int i = 0; i < minSize; i++)
        {
            string temp;
            
            for (string s : strs)
            {
                temp += s[i];
            }
            
            commonStr += temp[0];
            
            bool b = false;
            
            for (char a : temp)
            {
                if (a != temp[0])
                {
                    commonStr.erase(commonStr.size() - 1);
                    
                    b = true;
                    break;
                }
            }
            
            if (b)
            {
                break;
            }
        }
        
        return commonStr;
    }
};

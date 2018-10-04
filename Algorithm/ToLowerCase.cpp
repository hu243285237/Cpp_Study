///////////////////////////////////////////////////////////////////////////////////
//  实现函数 ToLowerCase()，该函数接收一个字符串参数 str，
//  并将该字符串中的大写字母转换成小写字母，之后返回新的字符串。
///////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/to-lower-case/description/
///////////////////////////////////////////////////////////////////////////////////

class Solution {

    public:
    
    string toLowerCase(string str) 
    {
        string lowerStr;
        
        for (char c : str)
        {
            if((int)c <= 90 && (int)c >= 65)
            {
                int i = (int)c + 32;
                
                lowerStr += (char)i;
            }
            else
            {
                lowerStr += c;
            }
        }
        
        return lowerStr;
    }
};

//////////////////////////////////////////////////////////////////////////////////
//  国际摩尔斯密码定义一种标准编码方式，将每个字母对应于一个由一系列点和短线组成的字符串，
//  比如: "a" 对应 ".-", "b" 对应 "-...", "c" 对应 "-.-.", 等等。...
//////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/unique-morse-code-words/description/
//////////////////////////////////////////////////////////////////////////////////

class Solution
{
    public:
    
    int uniqueMorseRepresentations(vector<string>& words) 
    {
        string character[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",
                      ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
                      "...","-","..-","...-",".--","-..-","-.--","--.."};
        
        vector<string> v;
        
        for (string s : words)
        {
            string temp = "";
            
            for (char c : s)
            {
                temp += character[c - 97];
            }
            
            v.push_back(temp);
        }
        
        set<string> se;
        
        for (string s : v)
        {
            if (!se.count(s))
            {
                se.insert(s);
            }
        }
        
        return se.size();
    }
};

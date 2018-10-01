///////////////////////////////////////////////////////////////////
//  罗马数字包含以下七种字符: I， V， X， L，C，D 和 M。
//  （此处省略10000个字）
///////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/roman-to-integer/description/
///////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    int romanToInt(string s) 
    {
        int num = 0;
        
        for (int i = 0; i < s.size(); i++)
        {
            switch (s[i])
            {
                case 'I' : num += 1;      break;
                case 'V' : num += 5;      break;
                case 'X' : num += 10;     break;
                case 'L' : num += 50;     break;
                case 'C' : num += 100;    break;
                case 'D' : num += 500;    break;
                case 'M' : num += 1000;   break;
            }
            
            if (i < s.size() - 1)
            {
                string temp;
                temp += s[i];
                temp += s[i + 1];
                
                if (temp == "IV")
                {
                    num -= 2;
                }
                else if (temp == "IX")
                {
                    num -= 2;
                }
                else if (temp == "XL")
                {
                    num -= 20;
                }
                else if (temp == "XC")
                {
                    num -= 20;
                }
                else if (temp == "CD")
                {
                    num -= 200;
                }
                else if (temp == "CM")
                {
                    num -= 200;
                }
            }
        }
        
        return num;
    }
};

////////////////////////////////////////////////////////////////////
//  给定一个非负整数 num，反复将各个位上的数字相加，直到结果为一位数。
////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/add-digits/description/
////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    int addDigits(int num)
    {
        while (num >= 10)
        {
            vector<int> v;
            
            while (num > 0)
            {
                v.push_back(num % 10);
                num /= 10;
            }
            
            num = 0;
            
            for (int i = 0; i < v.size(); i++)
            {
                num += v[i];
            }
        }
        
        return num;
    }
};

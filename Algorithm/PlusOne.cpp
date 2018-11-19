///////////////////////////////////////////////////////////////////
//  给定一个由整数组成的非空数组所表示的非负整数，在该数的基础上加一。
//  最高位数字存放在数组的首位， 数组中每个元素只存储一个数字。
//  你可以假设除了整数 0 之外，这个整数不会以零开头。
///////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/plus-one/description/
///////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    vector<int> plusOne(vector<int>& digits) 
    {
        int i = digits.size() - 1;
        
        digits[i]++;
        
        while (digits[i] == 10)
        {
            digits[i] = 0;
            
            i--;
            
            if (i >= 0)
            {
                digits[i]++;
            }
            else
            {
                digits.insert(digits.begin(), 1);
            }
        }
        
        return digits;
    }
};

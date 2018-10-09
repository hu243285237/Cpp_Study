////////////////////////////////////////////////////////////////////////////
//  写一个程序，输出从 1 到 n 数字的字符串表示。 如果 n 是3的倍数，输出“Fizz”；
//  如果 n 是5的倍数，输出“Buzz”；  如果 n 同时是3和5的倍数，输出 “FizzBuzz”。
////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/fizz-buzz/description/
////////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    vector<string> fizzBuzz(int n)
    {
        vector<string> v;
        
        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 && i % 5 == 0)
            {
                v.push_back("FizzBuzz");
            }
            else if (i % 3 == 0)
            {
                v.push_back("Fizz");
            }
            else if (i % 5 == 0)
            {
                v.push_back("Buzz");
            }
            else 
            {
                v.push_back(to_string(i));
            }
        }
        
        return v;
    }
};

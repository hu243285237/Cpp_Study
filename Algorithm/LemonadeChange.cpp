////////////////////////////////////////////////////////////////////////
//  在柠檬水摊上，每一杯柠檬水的售价为 5 美元。
//  顾客排队购买你的产品，（按账单 bills 支付的顺序）一次购买一杯。
//  每位顾客只买一杯柠檬水，然后向你付 5 美元、10 美元或 20 美元。
//  你必须给每个顾客正确找零，也就是说净交易是每位顾客向你支付 5 美元。
//  注意，一开始你手头没有任何零钱。
//  如果你能给每位顾客正确找零，返回 true ，否则返回 false 。
////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/lemonade-change/description/
////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    bool lemonadeChange(vector<int>& bills) 
    {
        int m5 = 0;
        int m10 = 0;
        int m20 = 0;
        
        for (int i : bills)
        {
            switch (i)
            {
                case 5:
                    m5++;
                    break;
                    
                case 10:
                    m10++;
                    if (m5 <= 0)
                    {
                        return false;
                    }
                    else
                    {
                        m5--;
                    }
                    break;
                    
                case 20:
                    m20++;
                    if (m10 > 0 && m5 > 0)
                    {
                        m10--;
                        m5--;
                    }
                    else if (m10 <= 0 && m5 >= 3)
                    {
                        m5-=3;
                    }
                    else
                    {
                        return false;
                    }
                    break;
            }
        }
        
        return true;
    }
};

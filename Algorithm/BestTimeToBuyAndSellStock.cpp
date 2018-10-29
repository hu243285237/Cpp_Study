//////////////////////////////////////////////////////////////////////////////////
//  给定一个数组，它的第 i 个元素是一支给定股票第 i 天的价格。...
//////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock/description/
//////////////////////////////////////////////////////////////////////////////////

class Solution
{
    public:
    
    int maxProfit(vector<int>& prices)
    {
        int minPrices = INT_MAX;
        int maxProfit = 0;
        
        for (int i : prices)
        {
            if (i < minPrices)
            {
                minPrices = i;
            }
            
            if (i - minPrices > maxProfit)
            {
                maxProfit = i - minPrices;
            }
        }
        
        return maxProfit;
    }
};

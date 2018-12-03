////////////////////////////////////////////////////////////////////////////////////////////
//  给定一个数组，它的第 i 个元素是一支给定股票第 i 天的价格。
//  设计一个算法来计算你所能获取的最大利润。你可以尽可能地完成更多的交易（多次买卖一支股票）。
//  注意：你不能同时参与多笔交易（你必须在再次购买前出售掉之前的股票）。
////////////////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-ii/description/
////////////////////////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    int maxProfit(vector<int>& prices) 
    {
        int sumProfit = 0;
        
        int currentMinPrice = INT_MAX;
        
        for (int i : prices)
        {
            if (i < currentMinPrice)
            {
                currentMinPrice = i;
            }
            else if (i - currentMinPrice > 0)
            {
                sumProfit += (i - currentMinPrice);
                currentMinPrice = i;
            }
        }
        
        return sumProfit;
    }
};

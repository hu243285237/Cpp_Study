/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  在《英雄联盟》的世界中，有一个叫 “提莫” 的英雄，他的攻击可以让敌方英雄艾希（编者注：寒冰射手）进入中毒状态。
//  现在，给出提莫对艾希的攻击时间序列和提莫攻击的中毒持续时间，你需要输出艾希的中毒状态总时长。
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/teemo-attacking/description/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    int findPoisonedDuration(vector<int>& timeSeries, int duration) 
    {
        int sum = 0;
        
        for (int i = 0; i < timeSeries.size(); i++)
        {
            sum += duration;
            
            if (i > 0 && timeSeries[i] - timeSeries[i - 1] < duration)
            {
                sum -= timeSeries[i - 1] + duration - timeSeries[i];
            }
        }
        
        return sum;
    }
};

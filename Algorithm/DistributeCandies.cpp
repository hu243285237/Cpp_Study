//////////////////////////////////////////////////////////////////////////
//  给定一个偶数长度的数组，其中不同的数字代表着不同种类的糖果，
//  每一个数字代表一个糖果。你需要把这些糖果平均分给一个弟弟和一个妹妹。
//  返回妹妹可以获得的最大糖果的种类数。
//////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/distribute-candies/description/
//////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    int distributeCandies(vector<int>& candies) 
    {
        set<int> s;
        
        for (int i = 0; i < candies.size(); i++)
        {
            if (!s.count(candies[i])) s.insert(candies[i]);
            
            if (s.size() == candies.size() / 2) break;
        }
        
        return s.size();
    }
};

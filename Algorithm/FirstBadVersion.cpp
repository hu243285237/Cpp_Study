////////////////////////////////////////////////////////////////////////////////
//  你是产品经理，目前正在带领一个团队开发新的产品。
//  不幸的是，你的产品的最新版本没有通过质量检测。
//  由于每个版本都是基于之前的版本开发的，所以错误的版本之后的所有版本都是错的。
//  ...
////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/first-bad-version/description/
////////////////////////////////////////////////////////////////////////////////

// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution
{
    public:
    
    int firstBadVersion(int n) 
    {
        long left = 1, right = n;
        
        while (true)
        {
            if (isBadVersion((right + left) / 2))
            {
                right = (right + left) / 2;
            }
            else
            {
                left = (right + left) / 2;
            }
            
            if (right - left <= 1) return isBadVersion(left) ? left : right;
        }
    }
};

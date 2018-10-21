//////////////////////////////////////////////////////////////////////////////////////////
//  假设你有一个很长的花坛，一部分地块种植了花，另一部分却没有。
//  可是，花卉不能种植在相邻的地块上，它们会争夺水源，两者都会死去。
//  给定一个花坛（表示为一个数组包含0和1，其中0表示没种植花，1表示种植了花），和一个数 n 。
//  能否在不打破种植规则的情况下种入 n 朵花？能则返回True，不能则返回False。
//////////////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/can-place-flowers/description/
//////////////////////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        if (flowerbed.size() > 1)
        {
            if (flowerbed[0] == 0 && flowerbed[1] == 0)
            {
                *flowerbed.begin() = 1;
                n--;
            }
            
            if (flowerbed[flowerbed.size() - 2] == 0 && flowerbed[flowerbed.size() - 1] == 0)
            {
                *(flowerbed.end() - 1) = 1;
                n--;
            }
            
            for (int i = 1; i < flowerbed.size() - 1; i++)
            {
                if (flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0 && flowerbed[i] == 0)
                {
                    *(flowerbed.begin() + i) = 1;
                    n--;
                }
            }
        }
        else
        {
            return flowerbed[0] == 1 && n == 1 ? false : true;
        }
        
        return n <= 0 ? true : false;
    }
};

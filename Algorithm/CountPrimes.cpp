///////////////////////////////////////////////////////////////
//  统计所有小于非负整数 n 的质数的数量。
///////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/count-primes/description/
///////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    int countPrimes(int n) 
    {
        bool* isPrimes = new bool[n];
        memset(isPrimes, 1, n);
        
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (isPrimes[i])
            {
                for (int j = i; i * j < n; j++)
                {
                    isPrimes[i * j] = false;
                }
            }
        }
        
        int sum = 0;
        
        for (int i = 2; i < n; i++)
        {
            if (isPrimes[i]) sum++;
        }
        
        return sum;
    }
};

//////////////////////////////////////////////////////////////////
//  你现在是棒球比赛记录员。...
//////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/baseball-game/description/
//////////////////////////////////////////////////////////////////

class Solution
{
    public:
    
    int calPoints(vector<string>& ops) 
    {
        int score = 0;
        
        vector<int> v;
        
        for (int i = 0; i < ops.size(); i++)
        {
            if (ops[i] == "C")
            {
                v.erase(v.end() - 1);
            }
            else if (ops[i] == "D")
            {
                v.push_back(*(v.end() - 1) * 2);
            }
            else if (ops[i] == "+")
            {
                v.push_back(*(v.end() - 1) + *(v.end() - 2));
            }
            else 
            {
                v.push_back(atoi(ops[i].c_str()));
            }
        }
        
        for (int i : v)
        {
            score += i;
        }
        
        return score;
    }
};

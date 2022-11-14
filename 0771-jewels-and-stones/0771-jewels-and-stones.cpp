class Solution {
public:
    int numJewelsInStones(string jewels, string stones)
    {
        unordered_set<char>mp;
        for(int i =0;i<jewels.size();i++)
        {
            mp.insert(jewels[i]);
        }
        int sol=0;
        for(int i =0;i<stones.size();i++)
        {
            if(mp.find(stones[i])!=mp.end())sol++;
        }
        return sol;
    }
};
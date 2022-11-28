class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches)
    {
        unordered_map<int,int> mp;
        unordered_set<int>s;
        int m = matches.size();
        
        for(int i =0;i<m;i++)
            mp[matches[i][1]]++;
        
        vector<int> oneLosers;
        vector<int> winners;
        
        for(auto it : mp)
            if(it.second==1)oneLosers.push_back(it.first);
        
        
        for(int i =0;i<m;i++)
            if(mp.find(matches[i][0])==mp.end() && s.find(matches[i][0])==s.end())
            {
                s.insert(matches[i][0]);
                winners.push_back(matches[i][0]);
            }
        
        sort(winners.begin(),winners.end());
        sort(oneLosers.begin(),oneLosers.end());
        vector<vector<int>> sol;
        sol.push_back(winners);
        sol.push_back(oneLosers);
        return sol;
    }
};
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches)
    {
        unordered_map<int,int> mp;
        unordered_set<int>s;
        int m = matches.size();
        
        for(int i =0;i<m;i++)
            mp[matches[i][1]]++;
        
        vector<vector<int>> sol(2);
        for(auto it : mp)
            if(it.second==1)sol[1].push_back(it.first);
        
        
        for(int i =0;i<m;i++)
            if(mp.find(matches[i][0])==mp.end() && s.find(matches[i][0])==s.end())
            {
                s.insert(matches[i][0]);
                sol[0].push_back(matches[i][0]);
            }
        
        sort(sol[0].begin(),sol[0].end());
        sort(sol[1].begin(),sol[1].end());
        return sol;
    }
};
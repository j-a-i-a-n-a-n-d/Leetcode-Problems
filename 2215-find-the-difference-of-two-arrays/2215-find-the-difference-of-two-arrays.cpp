class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_set<int> s1,s2;
        for(auto i : nums1)s1.insert(i);
        for(auto i : nums2)s2.insert(i);
        
        vector<vector<int>>res;
        vector<int> sol1,sol2;
        for(auto i : s1)
        {
            if(s2.find(i)==s2.end())sol1.push_back(i);
        }
        for(auto i : s2)
        {
            if(s1.find(i)==s1.end())sol2.push_back(i);
        }
        res.push_back(sol1);
        res.push_back(sol2);
        return res;
    }
};
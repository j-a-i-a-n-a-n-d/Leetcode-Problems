class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        unordered_map<string,vector<string>> mp;
        
        for(auto i : strs)
        {
            string str=i;
            sort(str.begin(),str.end());
            mp[str].push_back(i);
        }
        vector<vector<string>> ans;
        int counter=0;
        for(auto it : mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
    
    //hash into the form of 
    //aet    -> ate tea eat 
    //ant    -> ant nat tan tna
    //access them & push back in the ans vector
};
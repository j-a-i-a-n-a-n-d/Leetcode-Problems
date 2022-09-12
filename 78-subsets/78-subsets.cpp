class Solution {
public:
    void SUBSET(vector<int>nums,vector<vector<int>>&subset,vector<int>&subs,int i)
    {
        
        subset.push_back(subs);
        if (i>=nums.size())return;
        for(int j=i;j<nums.size();j++)
        {
            subs.push_back(nums[j]);
            SUBSET(nums,subset,subs,j+1);
            subs.pop_back();
        }
        
    }
    vector<vector<int>> subsets(vector<int>& nums)
    {
        vector<vector<int>>subset;
        vector<int>subs;
        SUBSET(nums,subset,subs,0);
        return subset;
    }
};
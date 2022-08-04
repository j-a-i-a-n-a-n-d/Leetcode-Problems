class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        vector<vector<int>>sol;
        sort(nums.begin(),nums.end());
        sol.push_back(nums);
        while(next_permutation(nums.begin(),nums.end()))
        {
            sol.push_back(nums);
        }
        return sol;
    }
};
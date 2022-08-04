class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int i=0;
        int p=0;
        sort(nums.begin(),nums.end());
        while (nums.size()>1 && i<nums.size()-1)
        {
            if(nums[i]==nums[i+1])
            {
                p++;
               nums.erase(nums.begin()+i);
                nums.erase(nums.begin()+i);
                
            }
            else
                i++;
        }
        vector<int> sol;
        sol.push_back(p);
        if (nums.empty())
            sol.push_back(0);
        else
            sol.push_back(nums.size());
        return sol;
        
    }
};
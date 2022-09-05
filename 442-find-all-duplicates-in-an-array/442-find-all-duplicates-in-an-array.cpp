class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        vector<int> sol;
        for(int i=0;i<nums.size();i++)
        {
            int n= abs(nums[i])-1;
            nums[n]=-nums[n];
            if(nums[abs(nums[i])-1]>0)sol.push_back(abs(nums[i]));
        }
        return sol;
       // unordered_map<int,int> mp;
       // for(int i=0;i<nums.size();i++)
       // {
       //     mp[nums[i]]++;
       // }
       // vector<int> ans;
       // for(auto it : mp)
       // {
       //     if (it.second==2)
       //     {
       //         ans.push_back(it.first);
       //     }
       // }
       // return ans;
    }
};


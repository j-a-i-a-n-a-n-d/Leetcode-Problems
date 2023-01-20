class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums)
    {
        int n = nums.size();
        
        for(int i =0;i<n;i++)
        {
            int idx = abs(nums[i])-1;
            if (idx>=0)
            nums[idx]=nums[idx]<0?nums[idx]:nums[idx]*-1;
            // if (nums[nums[i]-1]<0)continue;
            // else nums[nums[i]-1]*=-1;
        }
        vector<int> sol;
        for(int i=0;i<n;i++)
        {
            if (nums[i]>0)sol.push_back(i+1);
        }
        return sol;
    }
};
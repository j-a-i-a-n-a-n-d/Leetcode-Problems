class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        vector<int> sol;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int l = 0 ;
            int r = n-1;
            int smaller=0;
            for(int j=i;j>=l;j--)
            {
                if(nums[j]<nums[i])
                    smaller++;
            }
            for(int j=i;j<=r;j++)
            {
                if(nums[j]<nums[i])
                    smaller++;
            }
            sol.push_back(smaller);
        }
        return sol;
    }
};
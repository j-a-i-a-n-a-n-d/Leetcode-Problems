class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int maxSum = 0;
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            maxSum +=nums[i];
            ans = max(ans,maxSum);
            if (maxSum<0)maxSum=0;
        }
        return ans;
    }
};
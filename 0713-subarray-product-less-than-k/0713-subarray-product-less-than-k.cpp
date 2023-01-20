class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k)
    {
        //sliding window
        int ans=0;
        int left=0;
        int n = nums.size();
        if (k<=1)return 0;
        long long int product=1;
        
        for(int right=0;right<n;right++)
        {
            product*=nums[right];
            while (product>=k)
            {
                product/=nums[left];
                left++;
            }
            ans+=right-left+1;
        }
        return ans;
    }
    
};
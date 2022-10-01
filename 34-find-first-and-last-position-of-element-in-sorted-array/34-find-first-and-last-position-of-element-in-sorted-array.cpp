class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int leftLimit = -1,rightLimit=-1;
        int l=0;
        int r=nums.size()-1;
        int m=0;
        while (l<=r)
        {
            m=l+(r-l)/2;
            if (nums[m]==target)
            {
                r=m-1;
                leftLimit=m;
            }
            else if (nums[m]>target)
            {
                r=m-1;
            }
            else 
            {
                l=m+1;
            }
        }
        if (leftLimit==-1)return {-1,-1};
        
        l=0;
        r=nums.size()-1;
        while (l<=r)
        {
            m=l+(r-l)/2;
            if (nums[m]==target)
            {
                l=m+1;
                rightLimit=m;
            }
            else if (nums[m]>target)
            {
                r=m-1;
            }
            else 
            {
                l=m+1;
            }
        }
        return {leftLimit,rightLimit};
        
    }
};
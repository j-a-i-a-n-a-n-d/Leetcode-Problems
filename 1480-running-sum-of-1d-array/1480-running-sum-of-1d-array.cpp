class Solution {
public:
    void SUM(vector<int>&nums,int l)
    {
        if(l==nums.size())return;
        nums[l]=nums[l]+nums[l-1];
        SUM(nums,l+1);
    }
    vector<int> runningSum(vector<int>& nums)
    {
        SUM(nums,1);
        return nums;
    }
};
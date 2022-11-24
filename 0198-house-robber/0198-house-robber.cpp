class Solution {
    vector<int>mem;
public:
    int okBhai(vector<int>&nums,int n)
    {
        if(n<1)return 0;
        if(mem[n-1]!=-1)
            return mem[n-1];
        else
            return mem[n-1]=max(nums[n-1]+okBhai(nums,n-2),okBhai(nums,n-1));
    }
    int rob(vector<int>& nums) {
        mem.assign(nums.size(),-1);
        return okBhai(nums,nums.size());
    }
};
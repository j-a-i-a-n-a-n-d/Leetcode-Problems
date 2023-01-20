class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k)
    {
        int n = nums.size();
        unordered_map<int,int>mappy;
        mappy[0]=-1;
        for(int i=1;i<n;i++)nums[i]+=nums[i-1];
        for(int i=0;i<n;i++)
        {
            int rem = nums[i]%k;
            if (mappy.find(rem)==mappy.end())mappy[rem]=i;
            else if (i - mappy[rem]>1)return true;
                
        }
        return false;
    }
};
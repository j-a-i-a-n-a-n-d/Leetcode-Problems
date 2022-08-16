class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxx=INT_MIN;
        for(int j=0;j<nums.size();j++)
        {
            for(int i=0;i<j;i++)
            {
                maxx= max(maxx,nums[j]-nums[i]);
            }
        }
        if (maxx<=0)return -1;
        return maxx;
        
    }
};
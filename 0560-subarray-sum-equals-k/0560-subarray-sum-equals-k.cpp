class Solution {
public:
    int subarraySum(vector<int>& nums, int k)
    {
        unordered_map<int,int> mappy;
        int n = nums.size();
        
        for(int i=1;i<n;i++)nums[i]+=nums[i-1];
        
        int count=0;
        for(int i =0;i<n;i++)
        {
            if (nums[i]==k)count++;
            if(!mappy.empty()) 
            {
                int x = nums[i]-k;
                if (mappy.find(x)!=mappy.end())count+=mappy[x];
            }
            mappy[nums[i]]++;
        }
        return count;
    }
};
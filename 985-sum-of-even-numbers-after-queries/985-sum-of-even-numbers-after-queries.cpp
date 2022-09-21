class Solution {
public:
    int sum(vector<int>&nums)
    {
        int s=0;
        for(int i=0;i<nums.size();i++){if ((nums[i]%2)==0)s+=nums[i];}
        return s;
    }
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries)
    {
        int s=sum(nums);
        vector<int> sol;
        for(int i=0;i<queries.size();i++)
        {
             
            int z = queries[i][0];
            int x = queries[i][1];
            if ((nums[x]+z)%2==0)
            {
                if (nums[x]%2==0)s+=z;
                else s+=(nums[x]+z);
                nums[x]=nums[x]+z;
            }
            else
            {
                if (nums[x]%2==0)s-=nums[x];
                   nums[x]=nums[x]+z;
            }
            sol.push_back(s);
        }
        return sol;
    }
};
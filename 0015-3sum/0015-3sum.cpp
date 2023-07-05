class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
            sort(nums.begin(),nums.end());
            int l = nums.size();
            vector<vector<int>>sol;
            for(int i=0;i<l-2;i++)
            {
                    int target = -nums[i];
                    int low = i+1;
                    int high = l-1;
                    while(low<high)
                    {
                            int sum = nums[low]+nums[high];
                            if(target==sum)
                            {
                                    sol.push_back({nums[i],nums[low],nums[high]});
                                    while(low<high && nums[low]==nums[low+1])low++;
                                    while(low<high && nums[high]==nums[high-1])high--;
                                    low++;
                                    high--;
                            }
                            else if (sum<target)low++;
                            else high--;
                    }
                    while(i+1<l && nums[i]==nums[i+1])i++;
            }
            return sol;
        
    }
};
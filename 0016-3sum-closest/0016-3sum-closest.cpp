class Solution {
public:
    int threeSumClosest(vector<int>& nums,int target) 
    {
            int diff = INT_MAX;
            sort(nums.begin(),nums.end());
            int sol;
            int l = nums.size();
            for(int i=0;i<l-2;i++)
            {
                    int sub_target = target-nums[i];
                    int low = i+1;
                    int high = l-1;
                    while(low<high)
                    {
                            int sum = nums[low]+nums[high];
                            if (abs(sub_target-sum)<diff)
                            {
                                    diff=abs(sub_target-sum);
                                    sol=nums[i]+sum;
                            }
                            else if (sum<sub_target)low++;
                            else high--;
                    }
            }
            return sol;
        
    }
};
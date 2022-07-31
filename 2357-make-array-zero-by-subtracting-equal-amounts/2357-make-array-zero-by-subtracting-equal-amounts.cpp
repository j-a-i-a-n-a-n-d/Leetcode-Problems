class Solution {
public:
    int minimumOperations(vector<int>& nums) 
    {
        int i=0,count=0;
        sort(nums.begin(),nums.end());
        while(nums[nums.size()-1]>0)
        {
            if(nums[i]!=0)
            {
                int a=nums[i];
                for(int j=i;j<nums.size();j++)
                    nums[j]=nums[j]-a;
                count++;
            }
            i++;
        }
        return count;
    }
};
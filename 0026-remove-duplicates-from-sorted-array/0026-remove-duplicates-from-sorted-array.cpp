class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int cntr = 0;
        for(int i=1;i<nums.size();i++)
        {
        
            if(nums[i] == nums[i-1]) 
                cntr++;
        
            else 
                nums[i-cntr] = nums[i];
        }
        return nums.size()-cntr;
    }
};
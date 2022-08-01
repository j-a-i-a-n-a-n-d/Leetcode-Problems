class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        //via xor
        //logic -> xor of ame type of elements =0
        //xor of unequal + everything *2 with result into the unequal no
        //relatable example 2-2+1-1+4 = 4
        
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans^=nums[i];
        }
        return ans;
        
    }
};
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        int l =0;
        int maxxy = INT_MIN;
        for(int i =0;i<nums.size();i++)
        {
            if (nums[i]!=1)
            {
                maxxy = max(maxxy,l);
                l = 0;
            }
            else
                l++;
        }
        return max(maxxy,l);
    }
};
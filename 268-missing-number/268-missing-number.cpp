class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int expectedSum=0;
        int calculatedSum=0;
        int n = nums.size();
        for(int i=0;i<nums.size();i++)
        {
            calculatedSum+=nums[i];
        }
         expectedSum=(n*(n+1))/2;
        return expectedSum-calculatedSum;
    }
};
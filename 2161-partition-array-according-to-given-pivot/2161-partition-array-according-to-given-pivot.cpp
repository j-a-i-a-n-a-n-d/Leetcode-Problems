class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int x)
    {
        vector<int> left;
        vector<int> right;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if (nums[i]==x)count++;
            else if(nums[i]<x)left.push_back(nums[i]);
            else right.push_back(nums[i]);
        }
        vector<int>sol;
        for(int i=0;i<left.size();i++)sol.push_back(left[i]);
        for(int i=0;i<count;i++)sol.push_back(x);
        for(int i=0;i<right.size();i++)sol.push_back(right[i]);
        return sol;
    }
};
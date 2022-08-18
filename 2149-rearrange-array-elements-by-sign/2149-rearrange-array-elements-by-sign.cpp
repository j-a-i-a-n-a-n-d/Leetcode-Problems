class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        vector<int> positive;
        vector<int> negative;
        for(int i=0;i<nums.size();i++)
        {
            if (nums[i]>0)positive.push_back(nums[i]);
            else negative.push_back(nums[i]);
        }
        vector<int>sol;
        int flag=1;
        int j=0,k=0;
        for(int i=0;i<nums.size();i++)
        {
            if (flag==1){sol.push_back(positive[j++]);}
            else {sol.push_back(negative[k++]);}
            flag=(-1*flag);
        }
        return sol;
    }
};
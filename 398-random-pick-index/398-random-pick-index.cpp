class Solution {
public:
    vector<int> nums;
    Solution(vector<int>& nums) 
    {
        this->nums=nums;
    }
    int pick(int target)
    {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if (nums[i]==target)ans.push_back(i);
        }
        //return ans.size()!=0?ans[rand()%ans.size()]:-1;
        return ans[rand()%ans.size()];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) 
    {
        vector<int> countArray(1001,1001);
        for(int i=0;i<nums.size();i++)
        {
            vector<int> tempCountArray(1001,0);
            for(auto j : nums[i])tempCountArray[j]++;
            for(int j=0;j<1001;j++)
                countArray[j]=min(countArray[j],tempCountArray[j]);
        }
        vector<int> sol;
        for(int i=0;i<1001;i++)
        {
            if (countArray[i])
                sol.push_back(i);
        }
        return sol;
    }
};
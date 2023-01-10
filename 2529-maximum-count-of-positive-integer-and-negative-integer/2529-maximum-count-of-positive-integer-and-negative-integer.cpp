class Solution {
public:
    int maximumCount(vector<int>& nums)
    {
        int positive=0;
        int negative=0;
        for(auto i : nums)
        {
            if (i<0)negative++;
            else if (i>0)positive++;
        }
        return negative>positive?negative:positive;
    }
};
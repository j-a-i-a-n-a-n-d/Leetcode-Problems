class Solution {
public:
    int longestOnes(vector<int>& nums, int k)
    {
        int ans = 0;
        int countZeroes = 0;
        int i = 0, j = 0;
        int n = nums.size();

        while (i < n)
        {
            if (!nums[i++])
                countZeroes++;
            while (countZeroes > k)
            {
                if (!nums[j])
                    countZeroes--;
                j++;
            }
            ans = max(i - j, ans);
        }
        return ans;   
    }
};
class Solution {
    public int findTargetSumWays(int[] nums, int target) {
        //Solution 1
        int sum = 0;
        for(int x : nums)
            sum += x;
        if(((sum - target) % 2 == 1) || (target > sum))
            return 0;
        
        int n = nums.length;
        int s2 = (sum - target)/2;
        int[][] t = new int[n + 1][s2 + 1];
        t[0][0] = 1;
        
        for(int i = 1; i < n + 1; i++) {
            for(int j = 0; j < s2 + 1; j++) {
                if(nums[i - 1] <= j)
                    t[i][j] = t[i-1][j] + t[i - 1][j - nums[i - 1]];
                else
                    t[i][j] = t[i - 1][j];
            }
        }
        return t[n][s2];
    }
};
//non zero array works fine else do above 


/*class Solution {
    int m[1001][2001]; 
public:
    Solution(){
        memset(m,-1,sizeof(m));
    }
    int countSubsetWithDifference(vector<int>&nums,int n,int p)
    {
        if (p==0)return 1;
        else if (n==0)return 0;
        else if (m[n][p+1000]!=-1)return m[n][p+1000];
        else 
        {
            if (nums[n-1]>p)
                return m[n][p+1000]=countSubsetWithDifference(nums,n-1,p);
            else 
                return 
                m[n][p+1000]=countSubsetWithDifference(nums,n-1,p-nums[n-1]) 
                                       +
                             countSubsetWithDifference(nums,n-1,p);
        }
    }
    int findTargetSumWays(vector<int>& nums, int target)
    {
        int sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        int p = (sum+target)/2;
        if(((sum - target) % 2 == 1) || (target > sum))
            return 0;
        return countSubsetWithDifference(nums,nums.size(),p);
    }
};
*/
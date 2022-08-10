class Solution {
public:
    int p(int N,vector<int>&arr, long long int sum){
             int dp[N+1][sum+1];
             for(int i=0;i<N+1;i++)
             {
                 dp[i][0]=1;
             }
             for(int j=1;j<sum+1;j++)
             {
                 dp[0][j]=0;
             }
             for(int i=1;i<N+1;i++)
             {
                 for(int j=1;j<sum+1;j++)
                 {
                     if (arr[i-1]<=j)
                     {
                         dp[i][j]=dp[i-1][j-arr[i-1]]
                                   || 
                                   dp[i-1][j];
                     }
                     else
                     {
                         dp[i][j]=dp[i-1][j];
                     }
                 }
             }
             return dp[N][sum];
        }
    bool canPartition(vector<int>& nums) {
        long long int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        if (sum%2==0)
        {
            return p(nums.size(),nums,sum/2);
        }
        else
        {
            return 0;
        }
    }
};
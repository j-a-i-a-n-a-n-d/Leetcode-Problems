class Solution {
public:
    
    int memoization(vector<int>&nums1,vector<int>&nums2,int n1,int n2)
    {
        if (n1==0 || n2==0)
            return 0;
        else
        {
            if (nums1[n1-1]==nums2[n2-1]){
                return 1+memoization(nums1,nums2,n1-1,n2-1);
            }
            else 
                return 0;
        }
    }
    int findLength(vector<int>& nums1, vector<int>& nums2) 
    {
        int dp[1005][1005];
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<nums1.size()+1;i++)dp[i][0]=0;
        for(int j=0;j<nums2.size()+1;j++)dp[0][j]=0;
        
        int n1=nums1.size();
        int n2=nums2.size();
        int maxlength=INT_MIN;
        for(int i=1;i<n1+1;i++)
        {
            for(int j=1;j<n2+1;j++)
            {
                if (nums1[i-1]==nums2[j-1])dp[i][j]=dp[i-1][j-1]+1;
                else dp[i][j]=0;
                maxlength=maxlength<dp[i][j]?dp[i][j]:maxlength;
            }
            
        }
        return maxlength;
    }
};
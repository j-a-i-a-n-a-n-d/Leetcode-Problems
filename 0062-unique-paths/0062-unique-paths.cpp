class Solution {
    int dp[101][101];
public:
    int dp_baby(int m,int n)
    {
        if(!m || !n)return 0;
        if(m==1 || n==1)return 1;
        
        if(dp[m][n]!=-1)return dp[m][n];
        
        return dp[m][n] = dp_baby(m-1,n)+ dp_baby(m,n-1);
    }
    int uniquePaths(int m, int n) 
    {
        memset(dp,-1,sizeof(dp));
        return dp_baby(m,n);
    }
};
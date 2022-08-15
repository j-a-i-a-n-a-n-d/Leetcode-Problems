class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) 
    {
        int dp[text1.size()+1][text2.size()+1];
        /*for (int i=0;i<text1.size()+1;i++)dp[i][0]=0;
        
        for (int i=0;i<text2.size()+1;i++)dp[0][i]=0;*/
        memset(dp,0,sizeof(dp));
        
        
        for(int i=1;i<text1.size()+1;i++)
        {
            for(int j=1;j<text2.size()+1;j++)
            {
                if (text1[i-1]==text2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else 
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[text1.size()][text2.size()];
    }
};
/*
class Solution {
    int dp[1001][1001];
public:
    Solution(){
        memset(dp,-1,sizeof(dp));
    }
    int LCS(string &a,string &b,int m,int n)
    {
        if (m==0 || n==0)return 0;
        else if (dp[m][n]!=-1)return dp[m][n];
        else if (a[m-1]==b[n-1])return dp[m][n]=1+ LCS(a,b,m-1,n-1);
        else 
        {
            return dp[m][n]= max(LCS(a,b,m-1,n),LCS(a,b,m,n-1));
        }
    }
    int longestCommonSubsequence(string text1, string text2) 
    {
        return LCS(text1,text2,text1.size(),text2.size());
    }
};*/

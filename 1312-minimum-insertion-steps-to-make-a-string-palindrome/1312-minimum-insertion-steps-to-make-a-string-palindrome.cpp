class Solution {
public:
    int minInsertions(string text1)
    {
        string text2 = text1;
        reverse(text2.begin(),text2.end());
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
        return text1.size()-dp[text1.size()][text2.size()];
    }
};
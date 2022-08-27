class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) 
    {
        int dp[str1.size()+1][str2.size()+1];
        //cout<<str1<<" "<<str2<<endl;
        memset(dp,0,sizeof(dp));
        for(int i=1;i<str1.size()+1;i++)
        {
            for(int j=1;j<str2.size()+1;j++)
            {
                if (str1[i-1]==str2[j-1])
                    dp[i][j]=dp[i-1][j-1]+1;
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        //for(int i=0;i<str1.size()+1;i++)
        //{
        //    for(int j=0;j<str2.size()+1;j++)
        //    {
        //        cout<<dp[i][j]<<" ";
        //    }
        //    cout<<endl;
        //}
        int i=str1.size();
        int j = str2.size();
        string s="";
        while (i>0 && j>0)
        {
            if (str1[i-1]==str2[j-1])
            {
                s=str1[i-1]+s;
                i--;
                j--;
            }
            else
            {
                if (dp[i-1][j]<dp[i][j-1])
                {
                    s=str2[j-1]+s;
                    j--;
                }    
                else
                {
                    s=str1[i-1]+s;
                    i--;
                }
            }
        }
        while (i>0){
            s= str1[i-1]+s;i--;}
        while (j>0){
            s= str2[j-1]+s;j--;}
        return s;
    }
};
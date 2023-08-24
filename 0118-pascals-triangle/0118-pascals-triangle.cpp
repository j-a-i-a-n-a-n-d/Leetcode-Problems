class Solution {
public:
    int dp[31][31];
    
    int Combination(int n,int r)
    {
        if (r==0 || n==r)return 1;
        if (r==1 || r+1==n)return n;
        
        if(dp[n][r]!=-1)return dp[n][r];
        
        return dp[n][r]=Combination(n-1,r)+Combination(n-1,r-1);
    }
    vector<vector<int>> generate(int numRows)
    {
        memset(dp, -1, sizeof(dp));
        numRows--;
        vector<vector<int>> ans;
        for(int n=0;n<=numRows;n++)
        {
            vector<int>temp;
            for(int r=0;r<=n;r++)
            {
                int temp_var = Combination(n,r);
                temp.push_back(temp_var);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

/*
class Solution {
public:
    
    int dp[31][31];
    
    int Combination(int n,int r)
    {
        if (r==0 || n==r)return 1;
        if (r==1 || r+1==n)return n;
        
        return Combination(n-1,r)+Combination(n-1,r-1);
    }
    vector<vector<int>> generate(int numRows) 
    {
        memset(dp, -1, sizeof(dp));
        numRows--;
        vector<vector<int>> ans;
        for(int n=0;n<=numRows;n++)
        {
            vector<int>temp;
            for(int r=0;r<=n;r++)
            {
                int temp_var = Combination(n,r);
                temp.push_back(temp_var);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
*/
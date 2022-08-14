class Solution {
public:
    int fib(int n) {
        int dp[n+1];
         dp[0]=0;
        if (n==0)return 0;
        if (n==1)return 1;
        dp[1]=1;
        for (int i=2;i<n+1;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};

/*class Solution {
    int m[32];
public:
    Solution()
    {
        memset(m,-1,sizeof(m));
    }
    int fib(int n)
    {
        if (n==1)return m[n]=1;
        else if (n==0) return m[n]=0;
        else 
            return m[n]=fib(n-1)+fib(n-2);
    }
};*/
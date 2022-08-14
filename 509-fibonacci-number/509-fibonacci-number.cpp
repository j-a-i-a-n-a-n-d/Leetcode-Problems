class Solution {
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
};
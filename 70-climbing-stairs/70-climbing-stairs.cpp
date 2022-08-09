class Solution {
    int m[46];
public:
    Solution(){
        memset(m,-1,sizeof(m));
    }
    int climbStairs(int n)
    {
        if (n<2)return m[n]=1;
        if (m[n]!=-1)
            return m[n];
        else
            return m[n]=climbStairs(n-1)+climbStairs(n-2);      
    }
};
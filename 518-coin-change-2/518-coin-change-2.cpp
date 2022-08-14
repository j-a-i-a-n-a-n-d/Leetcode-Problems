class Solution {
    int m[301][5001];
public:
    Solution(){
        memset(m,-1,sizeof(m));
    }
    int coinchange2(int a, vector<int>&coins,int n)
    {
        if (a==0)return 1;
        else if (n==0)return 0;
        else if (m[n][a]!=-1)return m[n][a];
        else 
        {
            if (coins[n-1]>a)
            {
                return m[n][a]=coinchange2(a,coins,n-1);
            }
            else
            {
                return m[n][a]=coinchange2(a-coins[n-1],coins,n) + coinchange2(a,coins,n-1);
            }
        }
    }
    int change(int amount, vector<int>& coins) {
        return coinchange2(amount,coins,coins.size());
    }
};
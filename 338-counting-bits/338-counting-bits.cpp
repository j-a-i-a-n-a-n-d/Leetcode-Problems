class Solution {
public:
    vector<int> countBits(int n)
    {
        vector<int>sol;
        sol.push_back(0);
        if (n==0)return sol;
        for(int i=1;i<=n;i++)
        {
            int temp=i;
            int k=0;
            while (temp>0)
            {
                temp=(temp&(temp-1));
                k++;
            }
            sol.push_back(k);
        }
        return sol;
    }
};
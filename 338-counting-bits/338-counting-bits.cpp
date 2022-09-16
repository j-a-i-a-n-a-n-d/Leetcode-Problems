class Solution {
public:
    //Brian Kerningam's Algorithm 
    //can be used to find number of ones in a binary number 
    // n = n & (n-1)
    // this removes the last set bit of the decimal equivalent binary number
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
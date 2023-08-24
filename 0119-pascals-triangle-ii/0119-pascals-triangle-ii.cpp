class Solution {
public:
    int nCr(int n, int r)
    {
        long long res = 1;
        for (int i = 0; i < r; i++)
        {
            res = res * (n - i);
            res = res / (i + 1);
        }
        return (int)(res);
    }
    vector<int> getRow(int n)
    {
        vector<int>temp;
        for(int r=0;r<=n;r++)
        {
            int temp_var = nCr(n,r);
            temp.push_back(temp_var);
        }
        return temp;
    }
};
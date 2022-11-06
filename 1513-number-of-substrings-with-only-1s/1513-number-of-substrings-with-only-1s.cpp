class Solution {
    const int m = 1000000007;
public:
    int numSub(string s)
    {
        int  sol =0;
        int l =0;
        for(int i =0;i<s.size();i++)
        {
            if (s[i]=='0')
                l=0;
            else
            {
                l++;
                sol =( sol%m + l%m )%m;
            }
        }
    return sol;
    }
};
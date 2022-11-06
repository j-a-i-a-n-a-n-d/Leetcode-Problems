class Solution {
public:
    int maxPower(string s) 
    {
        int l =1;
        int maxxy = INT_MIN;
        char c = s[0];
        for(int i=1;i<s.size();i++)
        {
            if (c != s[i])
            {
                maxxy = max(maxxy,l);
                l = 1;
                c = s[i];
            }
            else
                l++;
        }
        return max(maxxy,l);
    }
};
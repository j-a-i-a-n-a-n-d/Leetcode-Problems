class Solution {
    const int m = 1000000007;
public:
    int countHomogenous(string s) {
        int sol =1;
        int l =1;
        char c = s[0];
        for(int i=1;i<s.size();i++)
        {
            if (c != s[i])
            { 
                c= s[i];
                l=1;
                sol = sol + l;
            }
            else
            {
                l++;
                sol = (sol%m+l%m)%m;
            }
             
        }
        return sol;
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mappy;
        int l = 0;
        int r = 0;
        int len = s.size();
        int ans = 0;
        while (r < len) 
        {
            if (mappy.find(s[r]) != mappy.end()) 
            {
                l = max(l, mappy[s[r]] + 1);
            }
            mappy[s[r]] = r;
            
            ans = max(ans, r - l + 1);
            r++;
        }
        return ans;
    }
};

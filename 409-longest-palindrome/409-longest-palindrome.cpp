class Solution {
public:
    int longestPalindrome(string s)
    {
        int result =0;
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
            if (mp[s[i]]%2==0)
            {
                result = result + mp[s[i]];
                mp[s[i]]=0;
            }
        }
        for (auto it : mp)
        {
            if (it.second!=0)
            {    result++;
            break;}
        }
        return result;
    }
        
};
class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int r=s.size()-1;
        while(s[r]==32 && r>=0)r--;
        int c=r;
        while(c>=0 && s[c]!=32)c--;
        return r-c;
    }
};
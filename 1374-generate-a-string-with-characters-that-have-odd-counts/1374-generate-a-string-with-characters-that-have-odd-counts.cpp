class Solution {
public:
    string generateTheString(int n) {
        string s="";
        if (n==0) return "";
        if (n%2==0)
        {
            for(int i=1;i<n;i++)
                s=s+'a';
            return s+'b';
        }
        else
        {
            for(int i=1;i<=n;i++)
                s=s+'a';
            return s;
        }
    }
};
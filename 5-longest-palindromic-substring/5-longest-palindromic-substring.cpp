//class Solution {
//public:
//    string longestPalindrome(string s) 
//    {
//        if (s.size()==1)return s;
//        int max_length=0;
//        int n=s.length();
//        string sol="";
//        for(int i=0;i<n;i++)
//        {
//            int l=i,r=i;
//            while(l>=0 && r<=n-1 && s[l]==s[r])
//            {
//                if ((r-l+1)>max_length)
//                {
//                    max_length=r-l+1;
//                    sol=s.substr(l+1,r-l+1);
//                }
//                l--;r++;
//               
//            }
//            l=i;
//            r=i+1;
//            while(l>=0 && r<=n-1 && s[l]==s[r])
//            {
//                if(r-l+1>max_length)
//                {
//                    max_length=r-l+1;
//                    sol=s.substr(l+1,r-l+1);
//                }
//                l--;r++;
//                
//            }
//        }
//        return sol;
//    }
//};
class Solution {
public:
    void longestPalindrome_helper (string& s, string& ans, int l, int r) {
        string temp="";
        while (l>=0 && r<s.length() && (s[l]==s[r])) {
            l--;
            r++;
        }
        temp = s.substr(l+1, r-l-1);
        if (ans.length() < temp.length())
            ans = temp;        
    }
    
    string longestPalindrome(string s) {
        if (s.length() <2)
            return s;
        string ans = "";
        for (int i=0; i<s.length(); i++) {
            longestPalindrome_helper (s, ans, i, i);    /* Odd length  String */
            longestPalindrome_helper (s, ans, i, i+1);  /* Even length String */
        }
        return ans;
    }
};
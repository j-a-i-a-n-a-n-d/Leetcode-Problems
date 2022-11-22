class Solution {
public:
    bool isPalindrome(string s)
    {
        string tempString="";
        for(int i=0;i<s.size();i++)
            if(isalnum(s[i]))tempString.push_back(tolower(s[i]));
        cout<<tempString<<endl;
        string tempString2=tempString;
        reverse(tempString.begin(),tempString.end());
        return tempString==tempString2;
    }
};
class Solution {
public:
    vector<string>conversion(string s)
    {
        vector<string>temp;
        for(int i=0;i<s.size();i++)
        {
            string s1 = "";
            while (s[i]!=' ' && i<s.size())
            {
                s1=s1+s[i];i++;
            }
            temp.push_back(s1);
        }
        return temp;
    }
    bool wordPattern(string pattern, string s) 
    {
        int n = pattern.size();
        unordered_map<char,int>map1;
        unordered_map<string,int>map2;
        vector<string> temp = conversion(s);
        if (temp.size()!=n)return false;
        for(int i=0;i<n;i++){
            map1[pattern[i]]=i+1;
            map2[temp[i]]=i+1;
        }
        for(int i=0;i<n;i++)
            if (map1[pattern[i]]!=map2[temp[i]])return false;
        return true;
    }
};
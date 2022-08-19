class Solution {
public:
    bool qwerty(set<char>s,string str)
    {
        bool b = true;
        for(int i=0;i<str.size();i++)
        {
            if (s.find(str[i])!=s.end()||s.find(str[i]+32)!=s.end()){}
            else b=false;
        }
        return b;
    }
    vector<string> findWords(vector<string>& words)
    {
        set<char>s1={'q','w','e','r','t','y','u','i','o','p'};
        set<char>s2={'a','s','d','f','g','h','j','k','l'};
        set<char>s3={'z','x','c','v','b','n','m'};
        vector<string>sol;
        bool b = false;
        for(int i=0;i<words.size();i++)
        {
            if
                (s1.find(words[i][0])!=s1.end() || s1.find(words[i][0]+32)!=s1.end())
                b=qwerty(s1,words[i]);
            else if
                (s2.find(words[i][0])!=s2.end() || s2.find(words[i][0]+32)!=s2.end())
                b=qwerty(s2,words[i]);
            else
                b=qwerty(s3,words[i]);
            if (b)sol.push_back(words[i]);
        }
        return sol;
    }
};
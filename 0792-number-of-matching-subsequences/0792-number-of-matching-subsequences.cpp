class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words)
    {
        int sol =0;
        unordered_map<char,vector<int>>mp;
        for(int i =0;i<s.size();i++)
            mp[s[i]].push_back(i);
        for(int i =0;i<words.size();i++)
        {
            int c = INT_MIN;
            for(int j =0;j<words[i].size();j++)
            {
                auto it = upper_bound(mp[words[i][j]].begin(),mp[words[i][j]].end(),c);
                if (it==mp[words[i][j]].end())break;
                c = *it;
                if (j == words[i].size()-1)sol++;
            }
        }
        return sol;
        
    }
};


//------------------------------TLE------------------------
//--------------------------brute force--------------------
//class Solution {
//public:
//    int check(string &ss,string &word)
//    {
//        int w = word.size();
//        int s = ss.size();
//        int cntr=0;
//        int i =0;
//        int j =0;
//        while (i<s && j < w)
//        {
//            if (ss[i]==word[j]){j++;cntr++;}
//            i++;
//        }
//        return cntr==w;
//    }
//    int numMatchingSubseq(string s, vector<string>& words)
//    {
//        int res=0;
//        int s1 = words.size();
//        for(int i=0;i<s1;i++)
//            if (check(s,words[i]))res++;
//        return res;
//    }
//};
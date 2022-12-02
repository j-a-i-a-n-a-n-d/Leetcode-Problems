class Solution {
public:
    bool closeStrings(string word1, string word2) 
    {
        vector<int> count1(26,0),count2(26,0);
        unordered_set<int> s1;
        int n1=word1.size();
        int n2=word2.size();
        if(n1!=n2)return false;
        for(int i=0;i<n1;i++)
        {
            s1.insert(word1[i]);
            count1[word1[i]-'a']++;
            count2[word2[i]-'a']++;
        }
        for(int i=0;i<n2;i++)
        {
            if (s1.find(word2[i])!=s1.end())s1.erase(word2[i]);
        }
        if (s1.size()!=0)return false;
        sort(count1.begin(),count1.end());
        sort(count2.begin(),count2.end());
        for(int i=0;i<26;i++)
            if (count1[i]!=count2[i])return false;
        return true;
        
    }
};
class Solution {
public:
    vector<string> commonChars(vector<string>& words)
    {
        vector<int>countArray(26,101);
        for(int i=0;i<words.size();i++)
        {
            vector<int>tempCountArray(26,0);
            for(auto c : words[i])tempCountArray[c-'a']++;
            for(int j=0;j<26;j++)countArray[j]=min(countArray[j],tempCountArray[j]);
        }
        
        for(int i=0;i<26;i++)cout<<countArray[i]<<" ";
        cout<<endl;
        vector<string> res;
        for(int i=0;i<26;i++)
        {
            while(countArray[i]>0){res.push_back(string(1,i+'a'));countArray[i]--;}
        }
        return res;
    }
};
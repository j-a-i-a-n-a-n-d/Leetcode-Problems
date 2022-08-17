class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) 
    {
        
        string preprocess[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> str;
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            string s="";
            int m=words[i].size();
            for(int j=0;j<m;j++)
            {
                s= s+ preprocess[words[i][j]-'a'];
            }
            str.insert(s);
        }
        return str.size();
    }
};
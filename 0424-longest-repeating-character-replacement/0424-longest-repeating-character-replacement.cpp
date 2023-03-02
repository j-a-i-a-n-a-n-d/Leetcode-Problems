class Solution {
public:
    int characterReplacement(string s, int k)
    {
        unordered_set<char> st;
        for (auto ch : s)st.insert(ch);
        
        int globalMaximum=0;
        int n = s.size();
        
        
        for(auto it : st)
        {
            char char_to_replace = it;
            int localMaximum=0;
            int count_of_char = 0;
            int i =0,j=0;

            while(i<n)
            {
                if (s[i++] != char_to_replace)count_of_char++;
                
                while(count_of_char>k)
                {
                    if (char_to_replace!=s[j++])count_of_char--;
                }
                localMaximum = max(i-j,localMaximum);
            }
            globalMaximum = max(localMaximum,globalMaximum);
        }
        return globalMaximum;
    }
};
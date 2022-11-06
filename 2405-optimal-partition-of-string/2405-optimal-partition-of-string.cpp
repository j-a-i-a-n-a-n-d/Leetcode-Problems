class Solution {
public:
    int partitionString(string ss) 
    {
        int c=0;
        unordered_set<char> s;
        for(int i =0;i<ss.size();i++)
        {
            if (s.find(ss[i])==s.end())
            {
                s.insert(ss[i]);
            }
            else
            {
                s.clear();
                s.insert(ss[i]);
                c++;
            }
        }
        return c+1;
    }
};
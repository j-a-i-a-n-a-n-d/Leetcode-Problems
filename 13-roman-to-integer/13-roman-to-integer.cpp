class Solution {
public:
    int romanToInt(string s)
    {
        map<char,int> mp =
           {
                           {'I',1},
                           {'V',5},
                           {'X',10},
                           {'L',50},
                           {'C',100},
                           {'D',500},
                           {'M',1000}
            };
        vector<int>sol;
        for(int i=0;i<s.size();i++) sol.push_back(mp[s[i]]);
        int result = sol[sol.size()-1];
        for(int i=0;i<sol.size()-1;i++)
        {
            if (sol[i]<sol[i+1])result-=sol[i];
            else result+=sol[i];
        }
        return result;
    }
    
};
    
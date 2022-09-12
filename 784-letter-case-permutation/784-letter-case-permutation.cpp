class Solution {
public:
    void backtrack(vector<string>&sol,string s,string &temp,int i)
    {
        if (i>=s.length()){sol.push_back(temp);return;}
        
        if (isdigit(s[i])){
            temp = temp + s[i];
            backtrack(sol,s,temp,i+1);
        }
        else
        {
            string c1="",c2="";
            //upper ---->
            c1 = temp;
            char x = toupper(s[i]);
            c1 = c1 + x;
            backtrack(sol,s,c1,i+1);
            
            
            //to lower----->
            c2 = temp;
            char y = tolower(s[i]);
            c2 = c2 + y;
            backtrack(sol,s,c2,i+1); 
        }
    }
    vector<string> letterCasePermutation(string s)
    {
        string temp="";
        vector<string> sol;
        backtrack(sol,s,temp,0);
        return sol;
    }
};
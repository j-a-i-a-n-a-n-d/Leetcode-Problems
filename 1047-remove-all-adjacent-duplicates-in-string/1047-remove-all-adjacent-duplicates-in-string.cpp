class Solution {
public:
    string removeDuplicates(string s)
    {
        int n = s.size();
        stack<char> stock;
        for(int i=0;i<n;i++)
        {
            if(!stock.empty() && stock.top()==s[i])
                stock.pop();
            else
                stock.push(s[i]);
        }
        string sol = "";
        while(!stock.empty())
        {
            sol= stock.top()+sol;
            stock.pop();
        }
        return sol;
    }
};
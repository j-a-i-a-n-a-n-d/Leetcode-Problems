class Solution {
public:
    string makeGood(string s)
    {
        if (s.size()==1 || s.size()==0)return s;
        int n = s.size();
        stack<char> stock;
        stock.push(s[0]);
        for(int i =1;i<n;i++)
        {
            if(!stock.empty())
            {
                char c = stock.top();
                if (abs(s[i]-c)==32)stock.pop();
                else
                    stock.push(s[i]);
            }
            else
                stock.push(s[i]);
        }
        string sol = "";
         while(!stock.empty())
         {
             char c = stock.top();
             stock.pop();
             sol =c+sol;
         }
        return sol;
    }
};
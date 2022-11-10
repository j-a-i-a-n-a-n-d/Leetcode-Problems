class Solution {
public:
    string removeStars(string s) {
        string res;
        for (char c : s)
            if (c == '*')
                res.pop_back();
            else
                res += c;
        return res;
    }
    //string removeStars(string s) 
    //{
    //    stack<char>stock;
    //    int n = s.size();
    //    int i =0;
    //    while(s[i]=='*')
    //    {
    //        i++;
    //        stock.push(s[i]);
    //    }
    //    for(int j=i;j<n;j++)
    //    {
    //        if(!stock.empty() && s[j]=='*')
    //        {
    //            stock.pop();
    //        }
    //        else
    //            stock.push(s[j]);
    //    }
    //    string sol = "";
    //    while(!stock.empty())
    //    {
    //        sol = string(stock.top() + sol);
    //        stock.pop();
    //    }
    //    return sol;
    //    
    //}
};
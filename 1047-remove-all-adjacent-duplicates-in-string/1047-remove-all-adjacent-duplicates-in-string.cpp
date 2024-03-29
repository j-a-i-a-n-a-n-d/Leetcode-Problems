class Solution {
public:
    string removeDuplicates(string s) 
    {
        string res="";
        for(auto c : s)
        {
            if (res.size()!=0 && res.back()==c)
                res.pop_back();
            else
                res+=c;
        }
        return res;
    }
};

//class Solution {
//public:
//    string removeDuplicates(string s)
//    {
//        int n = s.size();
//        stack<char> stock;
//        for(int i=0;i<n;i++)
//        {
//            if(!stock.empty() && stock.top()==s[i])
//                stock.pop();
//            else
//                stock.push(s[i]);
//        }
//        string sol = "";
//        while(!stock.empty())
//        {
//            sol= string(stock.top()+sol);
//            stock.pop();
//        }
//        return sol;
//    }
//};
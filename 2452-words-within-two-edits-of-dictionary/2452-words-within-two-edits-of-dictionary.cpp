//class Solution {
//public:
//    int checkDict(string &s1,string &s2)
//    {
//        int c=0;
//        int n = s1.size();
//        //int m = s2.size();
//        int i=0;
//        while(i<n)
//        {
//            if(s1[i]!=s2[i])c++;
//            i++;
//        }
//        return c;
//    }
//    vector<string> twoEditWords(vector<string>& queries, vector<string>& dict)
//    {
//        vector<string> sol;
//        int n = queries.size();
//        int m = dict.size();
//        for(int i=0;i<n;i++)
//        {
//            for(int j=0;j<m;j++)
//            {
//                if(checkDict(queries[i],dict[j])<=2)sol.push_back(queries[i]);
//            }
//        }
//        return sol;
//    }
//};
class Solution {
public:
    bool check(string& q, vector<string>& dict){
        for(auto d: dict)
        {
            int c = 0;
            for(int i = 0; i < d.size(); ++i)
            {
                if(q[i] != d[i]) c++;
            }
            if(c <= 2) return true;
        }
        return false;
    }
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dict) 
    {
        vector<string> ans;
        for(auto q: queries)
        {
            if(check(q, dict)) ans.push_back(q);
        }
        return ans;
    }
};
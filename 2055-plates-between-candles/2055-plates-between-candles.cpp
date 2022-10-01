class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        vector<int> candles;
        int n = s.length();
        for(int i=0; i<n; i++){
            if(s[i] == '|') candles.push_back(i);}
        vector<int> res;
        for(auto &q : queries){
            int first = lower_bound(candles.begin(), candles.end(), q[0]) - candles.begin();
            int last = lower_bound(candles.begin(), candles.end(), q[1]) - candles.begin();
            
            if(first >= last) res.push_back(0);
            else {
                if(last == n || candles[last] != q[1]) last--;
                res.push_back(candles[last] - candles[first] - (last-first));
            }
        }
        return res;
    }
};

//class Solution {
//public:
//    vector<int> platesBetweenCandles(string s, vector<vector<int>>& q) 
//    {
//        vector<int> sol;
//        vector<int> prefixArray;
//        int prefix=0;
//        for(int i=0;i<s.size();i++)
//        {
//            if (s[i]=='|')
//            {
//                prefix+=1;
//                prefixArray.push_back(prefix);
//            }
//            else
//            {
//                prefixArray.push_back(prefix);
//            }      
//        }
//        for(auto i:prefixArray)cout<<prefixArray[i]<<" ";
//        for(int i=0;i<q.size();i++)
//        {
//            if (q[i][1]-q[i][0]<=1 || prefixArray[q[i][1]]-prefixArray[q[i][0]]==0)sol.push_back(0);
//            else
//            {
//                int l = q[i][0];
//                int r=q[i][1];
//                while (s[l]!='|')l++;
//                while (s[r]!='|')r--;
//                sol.push_back(r-l-(prefixArray[r]-prefixArray[l]));
//            }
//        }
//        return sol;
//    }
//};//
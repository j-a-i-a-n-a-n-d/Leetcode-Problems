class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& q)
    {
        int n=s.size();
        
        
        vector<int>starsPrefixSum(n,0);
        vector<int>candlesRight(n,0);
        vector<int>candlesLeft(n,0);
        
        candlesLeft[0]=(s[0]=='|')?0:-1;
        starsPrefixSum[0]=(s[0]=='*')?1:0;
        candlesRight[n-1]=(s[n-1]=='|')?n-1:n;
        
        for(int i=1;i<n;i++)
        {
            starsPrefixSum[i]=
                (s[i]=='*')?
                starsPrefixSum[i-1]+1 : starsPrefixSum[i-1];
            candlesLeft[i]=
                (s[i]=='|')?
                i : candlesLeft[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            candlesRight[i]=(s[i]=='|')?i:candlesRight[i+1];
        }
        for(int i=0;i<n;i++)cout<<starsPrefixSum[i]<<" ";
        cout<<endl;
        for(int i=0;i<n;i++)cout<<candlesLeft[i]<<" ";
        cout<<endl;
        for(int i=0;i<n;i++)cout<<candlesRight[i]<<" ";
        vector<int>sol(q.size(),0);
        for(int i=0;i<q.size();i++)
        {
            int l=candlesRight[q[i][0]];
            int r=candlesLeft[q[i][1]];
            sol[i]=l>=r?0:starsPrefixSum[r]-starsPrefixSum[l];
        }
        return sol;
    }
};
/*
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
*/
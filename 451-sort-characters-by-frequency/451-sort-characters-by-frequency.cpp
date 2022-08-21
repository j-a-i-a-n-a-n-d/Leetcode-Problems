class Solution {
public:
    string frequencySort(string s) 
    {
        priority_queue<pair<int,char>>pq;
        vector<int> mp(126,0);
        for(int i=0;i<s.size();i++)
                mp[s[i]]++;
        for(int it=0;it<126;it++)
        {
            if(mp[it]!=0)
                 pq.push(make_pair(mp[it],it));
        }
        string sol="";
        while (pq.size()!=0)
        {
            pair<int,char>top=pq.top();
                sol+=string(top.first, top.second);
            pq.pop();
        }
        return sol;
    }
        
};
//string frequencySort(string s) 
//   
//    
//    priority_queue<pair<int,char>>pq;
//        veto
//        for(int i=0;i<s.size();i++)
//        {
//            if (mp.find(s[i])!=mp.end())
//                mp[s[i]]++;
//            else
//                mp[s[i]]=1;
//        }
//        for(auto it : mp)
//        {
//            pq.push(make_pair(it.second,it.first));
//        }
//        string sol="";
//        while (pq.size()!=0)
//        {
//            pair<int,char>top=pq.top();
//            for(int i=1;i<=top.first;i++)
//                sol=sol+top.second;
//                     ^
//         MLE reason | |
//            pq.pop();
//        }
//        return sol;
//    }//
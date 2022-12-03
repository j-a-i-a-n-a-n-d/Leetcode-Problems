class Solution {
public:
    string frequencySort(string s) 
    {
        vector<int> v(256,0);
        for(auto ch : s)v[ch]++;
        
        
        //for(int i : v)cout<<i<<" ";
        //cout<<endl;
        
        vector<pair<int,int>>vp;
        
        for(int i=0;i<256;i++)vp.push_back(make_pair(v[i],i));
        
        sort(vp.begin(),vp.end(),greater<pair<int,int>>());
        
        //for(auto i : vp)cout<<i.first<<i.second<<" ";
        //cout<<endl;
        
        string s1 = "";
        for(int i=0;i<256;i++)
        {
            //cout<<s1<<endl;
            if(vp[i].first!=0)s1 = s1 + string(vp[i].first,vp[i].second);
        }
        return s1;
        
    }
};
class Solution {
public:
    void DFS(vector<int>adj[],vector<bool>&visited,string &labels,vector<int>&ans,int ca[],int i)
    {
        if (visited[i]==false)
        {
            visited[i]=true;
            for(auto child : adj[i])
            {
                int ca1[26]={};
                DFS(adj,visited,labels,ans,ca1,child);
                for(int k =0;k<26;k++)
                    ca[k]=ca[k]+ca1[k];
            }
            ca[labels[i]-'a']++;
            ans[i]=ca[labels[i]-'a'];
        }
    }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) 
    {
        vector<bool>visited(n,false);
        vector<int> ans(n,0);
        int countArray[26]={};
        vector<int>adj[n];
        
        for(int i=0;i<edges.size();i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        DFS(adj,visited,labels,ans,countArray,0);
        return ans;
    }
};
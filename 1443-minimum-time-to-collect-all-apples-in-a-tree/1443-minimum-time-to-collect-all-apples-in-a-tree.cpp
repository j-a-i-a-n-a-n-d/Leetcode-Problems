class Solution {
public:
    int DFS(vector<int>adj[], vector<bool>&hasApple, int c,int p)
    {
        int time  = 0;
        for(auto child : adj[c])
        {
            if (child==p)  continue;
            int timeChildReq = DFS(adj,hasApple,child,c);
            if (timeChildReq)
                time=time + timeChildReq+2;
            else if (hasApple[child])
                time=time + timeChildReq+2;
        }
        return time;
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple)
    {
        vector<int> adj[n];
        for(int i =0;i<edges.size();i++)
        {
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        return DFS(adj,hasApple,0,-1);
    }
};